//
// Created by ADMIN on 4/18/2023.
//

#ifndef C_UPLOAD_H
#define C_UPLOAD_H
#include <gtk/gtk.h>
extern GtkWidget *label_song_upload, *entry_song_upload,
*label_artist_upload, *entry_artist_upload,
*label_image_upload, *image_file_upload,
*label_music_upload, *music_file_upload,*upload_fixed;

void upload_show();
void change_upload_status(char *str);
#endif //C_UPLOAD_H
