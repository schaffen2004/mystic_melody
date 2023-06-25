//
// Created by Nhat on 6/16/2023.
//

#ifndef C_UPLOAD_TAB_H
#define C_UPLOAD_TAB_H

#include <gtk/gtkwidget.h>

extern int max_song;

extern GtkWidget
    *upload_tab_fixed,
    *upload_scroll_view,
    *song_grid,
    *upload_song_button,
    *upload_plus_icon;

void upload_tab_show();
void upload_tab_hide();
gboolean draw_song_frame(GtkWidget *widget, cairo_t *cr, gpointer data);

#endif //C_UPLOAD_TAB_H
