#include <gtk/gtk.h>
#include "src/config/database_config.h"
#include "src/view/intro_view.h"
#include "src/view/main_board_view.h"
#include "src/models/songs.h"
#include <mpg123.h>
#include <math.h>

int main(int argc, char *argv[]) {

    //get link database and project
    //set_path();

    //gtk initialize gtk
    gtk_init(&argc, &argv);
    main_board_show();
    //show intro window
    //intro_show(); => Code xong trả về hiện trạng cũ
    //find_song("lap");

//    mpg123_init();
//    mpg123_handle *mh = mpg123_new(NULL, NULL);
//    char *filename = "D:\\Project\\C\\mystic_melody\\database\\sound\\lap.mp3";
//
//    // Mở tệp tin MP3
//    int err = mpg123_open(mh, filename);
//    if (err != MPG123_OK) {
//        printf("Không thể mở tệp tin.\n");
//        return 1;
//    }
//
//    // Lấy tổng số mẫu âm thanh
//    off_t num_samples = mpg123_length(mh);
//
//    // Lấy tốc độ mẫu
//    long rate;
//    mpg123_getformat(mh, &rate, NULL, NULL);
//
//    // Tính số giây dựa trên tổng số mẫu và tốc độ mẫu
//    double seconds = (double)num_samples / (double)rate;
//    int result = (int) floor(seconds);
//    printf("Số giây của file MP3: %f\n", seconds);
//    printf("Số giây của file MP3: %d\n", result);
//
//    // Giải phóng bộ nhớ và đóng tệp tin
//    mpg123_close(mh);
//    mpg123_delete(mh);
//    mpg123_exit();


//    magic_t magic_cookie;
//    const char *filepath = "C:\\Users\\laphv\\Pictures\\Screenshots\\1.png";
//
//    // Khởi tạo libmagic
//    magic_cookie = magic_open(MAGIC_MIME_TYPE);
//    if (magic_cookie == NULL) {
//        printf("Không thể khởi tạo libmagic.\n");
//        return 1;
//    }
//
//    // Load cơ sở dữ liệu
//    if (magic_load(magic_cookie, NULL) != 0) {
//        printf("Không thể tải cơ sở dữ liệu libmagic.\n");
//        magic_close(magic_cookie);
//        return 1;
//    }
//
//    // Kiểm tra loại tệp tin
//    const char *filetype = magic_file(magic_cookie, filepath);
//    if (filetype == NULL) {
//        printf("Không thể kiểm tra tệp tin.\n");
//        magic_close(magic_cookie);
//        return 1;
//    }
//
//    // Kiểm tra nếu là tệp tin âm thanh
//    if (strncmp(filetype, "audio/", 6) == 0) {
//        printf("Đây là tệp tin âm thanh.\n");
//    } else {
//        printf("Đây không phải là tệp tin âm thanh.\n");
//    }
//
//    // Giải phóng bộ nhớ và đóng libmagic
//    magic_close(magic_cookie);
//
//    return 0;
    return 0;
}

