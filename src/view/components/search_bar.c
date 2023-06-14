//
// Created by ADMIN on 4/16/2023.
//

#include "search_bar.h"
#include "src/view/main_board_view.h"
#include "src/control/main_board_control.h"
GtkWidget *entry_search_bar,
        *exit_button,
        *exit_icon;

void  search_bar_show()
{
    // Tạo entry widget
    entry_search_bar = gtk_entry_new();
    gtk_widget_set_size_request(entry_search_bar, 463, 37);
    gtk_fixed_put(GTK_FIXED(main_board_fixed), entry_search_bar, 410, 30);


    GtkWidget *search = gtk_button_new_with_label("");
    gtk_fixed_put(GTK_FIXED(main_board_fixed), search, 820, 30);
    gtk_button_set_relief(GTK_BUTTON(search), GTK_RELIEF_NONE);
    GdkPixbuf *pixbuf_skip = gdk_pixbuf_new_from_file("assets/search_icon.svg", NULL);
    GtkImage *image_skip = gtk_image_new_from_pixbuf(pixbuf_skip);
    gtk_button_set_image(GTK_BUTTON(search), GTK_WIDGET(image_skip));
    gtk_widget_show(image_skip);

    g_signal_connect(search, "clicked", G_CALLBACK(search_song), NULL);


    exit_button = gtk_button_new_with_label("");
    gtk_fixed_put(GTK_FIXED(main_board_fixed), exit_button, 1445, 19);
    gtk_widget_set_size_request(exit_button, 50, 50);
    gtk_button_set_relief(GTK_BUTTON(exit_button), GTK_RELIEF_NONE);

    g_signal_connect(exit_button, "clicked", G_CALLBACK(exit), NULL);

    exit_icon = gtk_image_new_from_file("assets/exit_logo.png");
    gtk_fixed_put(GTK_FIXED(main_board_fixed), exit_icon, 1440, 15);
}