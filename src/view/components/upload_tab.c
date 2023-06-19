//
// Created by Nhat on 6/16/2023.
//

#include <gtk/gtk.h>
#include "upload_tab.h"
#include "src/view/main_board_view.h"
#include "src/control/main_board_control.h"

// Biến toàn cục
int max_song;

GtkWidget
    *upload_tab_fixed,
    *upload_scroll_view,
    *song_grid,
    *upload_song_button,
    *upload_plus_icon;

void upload_tab_show()
{
    // Khởi tạo upload_tab_fixed
    upload_tab_fixed = gtk_fixed_new();
    gtk_fixed_put(GTK_FIXED(main_board_fixed), upload_tab_fixed, 0, 0);

    // Khởi tạo upload_song_button
    upload_song_button = gtk_button_new();
    gtk_fixed_put(GTK_FIXED(upload_tab_fixed), upload_song_button, 340, 110);
    gtk_widget_set_size_request(upload_song_button, 60, 60);
    gtk_button_set_relief(GTK_BUTTON(upload_song_button), GTK_RELIEF_NONE);

    // Kết nối tín hiệu "clicked" của upload_song_button với hàm button_upload_click
    g_signal_connect(upload_song_button, "clicked", G_CALLBACK(button_upload_click), NULL);

    // Khởi tạo upload_plus_icon
    upload_plus_icon = gtk_image_new_from_file("assets/upload_plus_icon.png");
    gtk_fixed_put(GTK_FIXED(upload_tab_fixed), upload_plus_icon, 360, 130);

    // Khởi upload_scroll_view
    int
        scroll_view_width = 400,
        scroll_view_height = 480;

    upload_scroll_view = gtk_scrolled_window_new(NULL, NULL);
    gtk_fixed_put(GTK_FIXED(upload_tab_fixed), upload_scroll_view, 160, 200);
    gtk_widget_set_size_request(upload_scroll_view, scroll_view_width, scroll_view_height);
    gtk_scrolled_window_set_policy(GTK_SCROLLED_WINDOW(upload_scroll_view), GTK_POLICY_NEVER, GTK_POLICY_AUTOMATIC);

    // Khởi tạo song_grid
    song_grid = gtk_grid_new();
    gtk_container_add(GTK_CONTAINER(upload_scroll_view), song_grid);
    gtk_widget_set_size_request(song_grid, scroll_view_width, scroll_view_height);
    gtk_grid_set_row_spacing(GTK_GRID(song_grid), 50);
    gtk_grid_set_column_spacing(GTK_GRID(song_grid), 50);
    gtk_grid_set_row_homogeneous(GTK_GRID(song_grid), TRUE);
    gtk_grid_set_column_homogeneous(GTK_GRID(song_grid), TRUE);

    // Giả sử có 20 songs được upload
    max_song = 20;

    // Khởi tạo các song_frame
    for (int i = 0; i < max_song; i++)
    {
        GtkWidget *song_frame = gtk_drawing_area_new();
        gtk_widget_set_size_request(song_frame, 200, 250);
        gtk_grid_attach(GTK_GRID(song_grid), song_frame, i % 5, i / 5, 1, 1);
        g_signal_connect(song_frame, "draw", G_CALLBACK(draw_song_frame), NULL);
    }

    // Hiển thị upload_tab_fixed
    gtk_widget_show_all(upload_tab_fixed);
}

void upload_tab_hide()
{
    // Xóa upload_tab_fixed
    gtk_widget_destroy(upload_tab_fixed);
}

// Vẽ song_frame
gboolean draw_song_frame(GtkWidget *widget, cairo_t *cr, gpointer data)
{
    // Màu của song_frame
    GdkRGBA frame_color;
    gdk_rgba_parse(&frame_color, "#1DB954");

    // Vẽ song_frame
    cairo_set_source_rgba(cr, frame_color.red, frame_color.green, frame_color.blue, frame_color.alpha);
    cairo_rectangle(cr, 0, 0, 200, 250);
    cairo_fill(cr);

    return FALSE;
}