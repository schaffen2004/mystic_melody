//#include <gtk/gtk.h>
//#include <mpg123.h>
//#include "config/database_config.h"
//#include "view/intro_view.h"
//#include "view/main_board_view.h"
//#include "models/songs.h"
#include "Filter/Filter_music_source.c"
#include <math.h>

int main(int argc, char *argv[]) {
    char filename[100]; // Tạo một mảng ký tự để lưu trữ tên tệp tin
    scanf("%s", filename); // input data đầu vào
    Filter_music(filename); // Gọi hàm isMusicFile và truyền tên tệp tin
    return 0;
}


