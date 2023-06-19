#include <stdio.h>
#include <string.h>
#include <sqlite3.h>
#include <opencv2/opencv.h>

void resizeImage(const char* inputFilename) {
    // Lọc ảnh
    if (Filter_music(inputFilename) == 0) {
        return;
    }

    // Đọc ảnh gốc
    cv::Mat image = cv::imread(inputFilename, cv::IMREAD_UNCHANGED);
    if (image.empty()) {
        printf("Failed to load image: %s\n", inputFilename);
        return;
    }

    // Resize ảnh về kích cỡ 250x250
    cv::Size newSize(250, 250);
    cv::Mat resizedImage;
    cv::resize(image, resizedImage, newSize);

    // Lưu ảnh sau khi resize
    const char* outputFilename = "resized_image.jpg";
    cv::imwrite(outputFilename, resizedImage);

    printf("Image has been resized and saved as: %s\n", outputFilename);

    // Thêm thông tin ảnh vào cơ sở dữ liệu
    sqlite3* db;
    int rc = sqlite3_open("database/music.db", &db);
    if (rc == SQLITE_OK) {
        char* errorMessage = NULL;

        // Chuẩn bị câu lệnh SQL để thêm thông tin ảnh vào bảng
        const char* sql = "INSERT INTO image (filename) VALUES (?)";
        sqlite3_stmt* statement;
        rc = sqlite3_prepare_v2(db, sql, -1, &statement, 0);
        if (rc == SQLITE_OK) {
            // Gán giá trị tham số cho câu lệnh SQL
            sqlite3_bind_text(statement, 1, outputFilename, -1, SQLITE_STATIC);

            // Thực thi câu lệnh SQL
            rc = sqlite3_step(statement);
            if (rc != SQLITE_DONE) {
                fprintf(stderr, "Failed to insert data: %s\n", sqlite3_errmsg(db));
            }

            // Đóng câu lệnh SQL
            sqlite3_finalize(statement);
        } else {
            fprintf(stderr, "Failed to prepare statement: %s\n", sqlite3_errmsg(db));
        }

        // Đóng cơ sở dữ liệu
        sqlite3_close(db);
    } else {
        fprintf(stderr, "Failed to open database: %s\n", sqlite3_errmsg(db));
    }
}

