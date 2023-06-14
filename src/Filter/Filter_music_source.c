//
// Created by Admin on 14/06/2023.
//
#include <stdio.h>
#include <string.h>
#include <sqlite3.h>

int Filter_music(const char* filename) {
    const char* extension = strrchr(filename, '.'); // Lấy phần mở rộng của tên file
    if (extension != NULL) {
        if (strcmp(extension, ".mp3") == 0 || strcmp(extension, ".wav") == 0) {
            printf("%s has been added to the database", filename);

            // Mã để thêm file vào cơ sở dữ liệu ở đây
            sqlite3* db;
            int rc = sqlite3_open("database/music.db", &db);
            if (rc == SQLITE_OK) {
                // Chuẩn bị câu lệnh SQL để thêm dữ liệu vào bảng tương ứng
                char sql[100];
                snprintf(sql, sizeof(sql), "INSERT INTO songs (filename) VALUES ('%s')", filename);

                // Thực thi câu lệnh SQL
                rc = sqlite3_exec(db, sql, 0, 0, 0);
                if (rc != SQLITE_OK) {
                    fprintf(stderr, "Failed to insert data: %s\n", sqlite3_errmsg(db));
                }

                // Đóng cơ sở dữ liệu
                sqlite3_close(db);
            } else {
                fprintf(stderr, "Failed to open database: %s\n", sqlite3_errmsg(db));
            }

            return 1;
        }
    }
    printf("%s is not in the correct file format, only .mp3 and .wav", filename);
    return 0;
}


