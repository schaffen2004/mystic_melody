//
// Created by ADMIN on 4/17/2023.
//

#ifndef C_MAIN_BOARD_VIEW_H
#define C_MAIN_BOARD_VIEW_H
#include <gtk/gtk.h>

extern GtkWidget *main_board_win;
extern GtkWidget *main_board_fixed;
extern GtkWidget *scrolled_window, *list,
        *home_button,*heart_button,*library_button,
        *add_playlist_button,*header_logo,*explorer_icon,
        *favourite_icon,*upload_icon,*rect_area,*tab_label,*list_tmp;
extern int selected_row_index ;

void main_board_show();

#endif //C_MAIN_BOARD_VIEW_H
