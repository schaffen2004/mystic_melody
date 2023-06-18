//
// Created by ADMIN on 4/16/2023.
//

#include "search_bar.h"
#include "src/view/main_board_view.h"
#include "src/control/main_board_control.h"
GtkWidget
    *entry_search_bar,
    *exit_button,
    *exit_icon,
    *search_icon;

void  search_bar_show()
{
// Create a box to hold the search button and entry widget
    GtkWidget *box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 0);
    gtk_fixed_put(GTK_FIXED(main_board_fixed), box, 425, 26);

    // Create the search button
    GtkWidget *search = gtk_button_new();
    gtk_fixed_put(GTK_FIXED(main_board_fixed), search, 440, 34);
    gtk_button_set_relief(GTK_BUTTON(search), GTK_RELIEF_NONE);

    // Create a box to hold the search button image
    GtkWidget *search_box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 0);
    gtk_container_add(GTK_CONTAINER(search), search_box);

    // Create an image widget for the search button
    search_icon = gtk_image_new_from_file("assets/searchButton.svg");
    gtk_widget_set_name(search_icon, "button_search");
    gtk_fixed_put(GTK_FIXED(main_board_fixed), search_icon, 440, 34);


    // Create the entry widget
    entry_search_bar = gtk_entry_new();
    gtk_box_pack_start(GTK_BOX(box), entry_search_bar, TRUE, TRUE, 0);
    gtk_widget_set_size_request(entry_search_bar, 700, 50);

    // Apply custom CSS style to the entry widget
    const gchar *css_entry = "* {"
                             "  box-sizing: border-box;"
                             "  position: absolute;"
                             "  width: 200px; /* Adjust the width as per your preference */"
                             "  height: 30px; /* Adjust the height as per your preference */"
                             "  left: 425px;"
                             "  top: 26px;"
                             "  background: #8E0E00;"
                             "  border: 1px solid #000000;"
                             "  border-radius: 15px; /* Adjust the border-radius as per your preference */"
                             "  padding: 0 65px; /* Adjust the padding as per your preference */"
                             "  margin: -3px;"
                             "}";
    GtkCssProvider *css_provider_entry = gtk_css_provider_new();
    gtk_css_provider_load_from_data(css_provider_entry, css_entry, -1, NULL);
    gtk_style_context_add_provider(gtk_widget_get_style_context(entry_search_bar),
                                   GTK_STYLE_PROVIDER(css_provider_entry),
                                   GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);

    // Create the exit button
    exit_button = gtk_button_new();
    gtk_fixed_put(GTK_FIXED(main_board_fixed), exit_button, 1445, 19);
    gtk_widget_set_size_request(exit_button, 50, 50);
    gtk_button_set_relief(GTK_BUTTON(exit_button), GTK_RELIEF_NONE);

    // Create an image widget for the exit button
    exit_icon = gtk_image_new_from_file("assets/exit_icon.png");
    gtk_button_set_image(GTK_BUTTON(exit_button), exit_icon);

    // Connect the exit button click event to the exit function
    g_signal_connect(search_icon, "clicked", G_CALLBACK(search_song), NULL);
    g_signal_connect(exit_button, "clicked", G_CALLBACK(exit), NULL);
}
