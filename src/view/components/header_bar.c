//
// Created by ADMIN on 4/16/2023.
//

#include "header_bar.h"
#include "src/view/main_board_view.h"
#include "src/control/main_board_control.h"

void on_draw_header_bar(GtkWidget *widget, cairo_t *cr, gpointer user_data) {
    // Chỉnh màu cho background của hcn
    cairo_set_source_rgb(cr, 41/255.0, 40/255.0, 40/255.0); // fill color

    // Bắt đầu vẽ hcn
    cairo_rectangle(cr, 0, 0, 300, 680);
    cairo_fill_preserve(cr); // fill the rectangle
    cairo_stroke(cr); // draw the border
}

void set_header_bar_properties()
{
    GtkWidget
        *explorer_button,
        *favourite_button,
        *library_button,
        *upload_button,
        *explorer_icon,
        *favourite_icon,
        *library_icon,
        *upload_icon;

    // Tạo một hình chữ nhật để chứa toàn bộ Widget
    rect_area = gtk_drawing_area_new();
    // Set size và vị trí cho hình chữ nhật
    gtk_widget_set_size_request(rect_area,80 , 800);
    gtk_fixed_put(GTK_FIXED(main_board_fixed), rect_area, 0, 0);
    // bắt đầu vẽ hình chữ nhật
    g_signal_connect(rect_area, "draw", G_CALLBACK(on_draw_header_bar), NULL);

    // Khởi tạo nút Explorer
    explorer_button = gtk_button_new_with_label("");
    gtk_fixed_put(GTK_FIXED(main_board_fixed), explorer_button, 0, 100);
    gtk_widget_set_size_request(explorer_button, 80, 80);
    gtk_button_set_relief(GTK_BUTTON(explorer_button), GTK_RELIEF_NONE);

    // Khởi tạo nút Favourite
    favourite_button = gtk_button_new_with_label("");
    gtk_fixed_put(GTK_FIXED(main_board_fixed), favourite_button, 0, 200);
    gtk_widget_set_size_request(favourite_button, 80, 80);
    gtk_button_set_relief(GTK_BUTTON(favourite_button), GTK_RELIEF_NONE);

    // Khởi tạo nút Library
    library_button = gtk_button_new_with_label("");
    gtk_fixed_put(GTK_FIXED(main_board_fixed), library_button, 0, 300);
    gtk_widget_set_size_request(library_button, 80, 80);
    gtk_button_set_relief(GTK_BUTTON(library_button), GTK_RELIEF_NONE);

    // Khởi tạo nút Upload
    upload_button = gtk_button_new_with_label("");
    gtk_fixed_put(GTK_FIXED(main_board_fixed), upload_button, 0, 400);
    gtk_widget_set_size_request(upload_button, 80, 80);
    gtk_button_set_relief(GTK_BUTTON(upload_button), GTK_RELIEF_NONE);

    // Add event clicked cho từng nút
    g_signal_connect(explorer_button, "clicked", G_CALLBACK(tab_explorer_click), NULL);
    //g_signal_connect(favourite_button, "clicked", G_CALLBACK(tab_favourite_click), NULL);
    //g_signal_connect(library_button, "clicked", G_CALLBACK(tab_library_click), NULL);
    //g_signal_connect(upload_button, "clicked", G_CALLBACK(tab_upload_click), NULL);

    /*
    // Khởi tạo Logo của app ở đỉnh của selection menu
    header_logo = gtk_image_new_from_file("assets/header_logo.png");
    gtk_fixed_put(GTK_FIXED(main_board_fixed), header_logo, 20, 0);
    */

    // Thêm các icon của từng mục
    explorer_icon = gtk_image_new_from_file("assets/explorer_icon.png");
    gtk_fixed_put(GTK_FIXED(main_board_fixed), explorer_icon, 25, 125);
    favourite_icon = gtk_image_new_from_file("assets/favourite_icon.png");
    gtk_fixed_put(GTK_FIXED(main_board_fixed), favourite_icon, 25, 225);
    library_icon = gtk_image_new_from_file("assets/library_icon.png");
    gtk_fixed_put(GTK_FIXED(main_board_fixed), library_icon, 25, 325);
    upload_icon = gtk_image_new_from_file("assets/upload_icon.png");
    gtk_fixed_put(GTK_FIXED(main_board_fixed), upload_icon, 25, 425);
}

void show_header_bar() {
    set_header_bar_properties();
    //load_header_bar_css();
}

void load_header_bar_css() {
    GtkCssProvider *header_bar_css;
    gtk_css_provider_load_from_path(header_bar_css, "src/view/properties/header_bar.css", NULL);
}
