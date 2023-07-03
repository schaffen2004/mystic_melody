#include <stdio.h>

void toggle_repeat_state()
{
    // Lấy trạng thái hiện tại của phát nhạc lặp lại từ cơ sở dữ liệu hoặc biến khác
    bool current_state = get_repeat_state(); // Hàm get_repeat_state() trả về true nếu phát nhạc lặp lại đang được bật và false nếu đã tắt

    // Đảo ngược trạng thái
    bool new_state = !current_state;

    // Cập nhật trạng thái mới vào cơ sở dữ liệu hoặc biến khác
    set_repeat_state(new_state); // Hàm set_repeat_state() cập nhật trạng thái mới (true nếu bật, false nếu tắt) vào cơ sở dữ liệu hoặc biến khác

    // Hiển thị thông báo cho người dùng
    if (new_state) {
        printf("Đã bật chế độ phát nhạc lặp lại.\n");
    } else {
        printf("Đã tắt chế độ phát nhạc lặp lại.\n");
    }
}
