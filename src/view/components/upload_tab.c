//
// Created by Nhat on 6/16/2023.
//

#include <gtk/gtk.h>
#include "upload_tab.h"
#include "src/view/main_board_view.h"
#include "src/control/main_board_control.h"

GtkWidget
    *upload_tab_fixed,
    *upload_song_button,
    *upload_plus_icon;

void upload_tab_show()
{
    // Khởi tạo upload_tab_fixed
    upload_tab_fixed = gtk_fixed_new();
    gtk_fixed_put(GTK_FIXED(main_board_fixed), upload_tab_fixed, 0, 0);

    // Khởi tạo nút "+" (upload)
    upload_song_button = gtk_button_new();
    gtk_fixed_put(GTK_FIXED(upload_tab_fixed), upload_song_button, 340, 110);
    gtk_widget_set_size_request(upload_song_button, 60, 60);
    gtk_button_set_relief(GTK_BUTTON(upload_song_button), GTK_RELIEF_NONE);

    // Add event clicked cho nút "+"
    g_signal_connect(upload_song_button, "clicked", G_CALLBACK(button_upload_click), NULL);

    // Add icon cho cho nút "+"
    upload_plus_icon = gtk_image_new_from_file("assets/upload_plus_icon.png");
    gtk_fixed_put(GTK_FIXED(upload_tab_fixed), upload_plus_icon, 360, 130);
}

void upload_tab_hide()
{
    gtk_widget_destroy(upload_tab_fixed);
}