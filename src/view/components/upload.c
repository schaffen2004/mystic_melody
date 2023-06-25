//
// Created by ADMIN on 4/18/2023.
//

#include "upload.h"
#include "src/view/main_board_view.h"
#include "src/control/main_board_control.h"

// Biến toàn cục
GtkWidget
    *label_song_upload,
    *entry_song_upload,
    *label_artist_upload,
    *entry_artist_upload,
    *label_image_upload,
    *image_file_upload,
    *label_music_upload,
    *music_file_upload,
    *upload_button,
    *label_upload_status,
    *upload_fixed;

void upload_show()
{
    // Khởi tạo upload_fixed
    GdkRGBA color_upload;
    gdk_rgba_parse(&color_upload, "white");
    upload_fixed = gtk_fixed_new();
    gtk_fixed_put(GTK_FIXED(main_board_fixed), upload_fixed, 0, 0);

    // Khởi tạo các label, entry, button
    label_song_upload = gtk_label_new("Song Name:");
    gtk_fixed_put(GTK_FIXED(upload_fixed), label_song_upload, 180, 180);
    gtk_widget_override_color(label_song_upload , GTK_STATE_NORMAL, &color_upload);

    entry_song_upload = gtk_entry_new();
    gtk_widget_set_size_request(entry_song_upload, 200, -1);
    gtk_fixed_put(GTK_FIXED(upload_fixed), entry_song_upload, 180, 210);

    label_artist_upload = gtk_label_new("Artist:");
    gtk_fixed_put(GTK_FIXED(upload_fixed), label_artist_upload, 180, 260);
    gtk_widget_override_color(label_artist_upload, GTK_STATE_NORMAL, &color_upload);

    entry_artist_upload = gtk_entry_new();
    gtk_widget_set_size_request(entry_artist_upload, 200, -1);
    gtk_fixed_put(GTK_FIXED(upload_fixed), entry_artist_upload, 180, 290);

    label_image_upload = gtk_label_new("Select Image:");
    gtk_fixed_put(GTK_FIXED(upload_fixed), label_image_upload, 180, 340);
    gtk_widget_override_color(label_image_upload, GTK_STATE_NORMAL, &color_upload);

    image_file_upload = gtk_file_chooser_button_new("Select Image File", GTK_FILE_CHOOSER_ACTION_OPEN);
    gtk_widget_set_size_request(image_file_upload, 200, -1);
    gtk_fixed_put(GTK_FIXED(upload_fixed), image_file_upload, 180, 370);

    label_music_upload = gtk_label_new("Select Music:");
    gtk_fixed_put(GTK_FIXED(upload_fixed), label_music_upload, 180, 420);
    gtk_widget_override_color(label_music_upload, GTK_STATE_NORMAL, &color_upload);

    music_file_upload = gtk_file_chooser_button_new("Select Music File", GTK_FILE_CHOOSER_ACTION_OPEN);
    gtk_widget_set_size_request(music_file_upload, 200, -1);
    gtk_fixed_put(GTK_FIXED(upload_fixed), music_file_upload, 180, 450);

    upload_button = gtk_button_new_with_label("Upload");
    gtk_widget_set_size_request(upload_button, 80, 35);
    gtk_fixed_put(GTK_FIXED(upload_fixed), upload_button, 300, 510);
    g_signal_connect(upload_button, "clicked", G_CALLBACK(upload_new_song), NULL);

    label_upload_status = gtk_label_new("");
    gtk_fixed_put(GTK_FIXED(upload_fixed), label_upload_status, 180, 560);
    gtk_widget_override_color(label_upload_status , GTK_STATE_NORMAL, &color_upload);
}

// Đổi nội dung label thông báo tình trạng upload (Ex: Song uploaded successfully!)
void change_upload_status(char *str) {
     gtk_label_set_label(label_upload_status, str);
}
