#include <stdio.h>

// Khai báo biến global để lưu trạng thái phát nhạc ngẫu nhiên
int update_playlist(char playlist_name[], char song_name[])
{
    // Mở kết nối tới cơ sở dữ liệu
    sqlite3 *db;
    int rc = sqlite3_open(absolute_path, &db);
    if (rc != SQLITE_OK) {
        fprintf(stderr, "Cannot open database: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        return UPDATE_FAIL;
    }

    // Kiểm tra xem playlist có tồn tại trong cơ sở dữ liệu hay không
    char *playlist_sql = "SELECT playlist_id FROM playlist WHERE playlist_name = ?;";
    sqlite3_stmt *playlist_stmt;
    rc = sqlite3_prepare_v2(db, playlist_sql, -1, &playlist_stmt, 0);
    sqlite3_bind_text(playlist_stmt, 1, playlist_name, -1, SQLITE_STATIC);
    if (sqlite3_step(playlist_stmt) != SQLITE_ROW) {
        fprintf(stderr, "Playlist not found.\n");
        sqlite3_finalize(playlist_stmt);
        sqlite3_close(db);
        return UPDATE_FAIL;
    }
    int playlist_id = sqlite3_column_int(playlist_stmt, 0);
    sqlite3_finalize(playlist_stmt);

    // Kiểm tra xem bài hát có tồn tại trong cơ sở dữ liệu hay không
    char *song_sql = "SELECT song_id FROM song WHERE song_name = ?;";
    sqlite3_stmt *song_stmt;
    rc = sqlite3_prepare_v2(db, song_sql, -1, &song_stmt, 0);
    sqlite3_bind_text(song_stmt, 1, song_name, -1, SQLITE_STATIC);
    if (sqlite3_step(song_stmt) != SQLITE_ROW) {
        fprintf(stderr, "Song not found.\n");
        sqlite3_finalize(song_stmt);
        sqlite3_close(db);
        return UPDATE_FAIL;
    }
    int song_id = sqlite3_column_int(song_stmt, 0);
    sqlite3_finalize(song_stmt);

    // Kiểm tra xem bài hát đã tồn tại trong playlist hay chưa
    char *check_sql = "SELECT * FROM song_playlist WHERE playlist_id = ? AND song_id = ?;";
    sqlite3_stmt *check_stmt;
    rc = sqlite3_prepare_v2(db, check_sql, -1, &check_stmt, 0);
    sqlite3_bind_int(check_stmt, 1, playlist_id);
    sqlite3_bind_int(check_stmt, 2, song_id);
    if (sqlite3_step(check_stmt) == SQLITE_ROW) {
        fprintf(stderr, "Song already exists in the playlist.\n");
        sqlite3_finalize(check_stmt);
        sqlite3_close(db);
        return UPDATE_FAIL;
    }
    sqlite3_finalize(check_stmt);

    // Thêm bài hát vào playlist
    char *insert_sql = "INSERT INTO song_playlist (playlist_id, song_id) VALUES (?, ?);";
    sqlite3_stmt *insert_stmt;
    rc = sqlite3_prepare_v2(db, insert_sql, -1, &insert_stmt, 0);
    sqlite3_bind_int(insert_stmt, 1, playlist_id);
    sqlite3_bind_int(insert_stmt, 2, song_id);
    rc = sqlite3_step(insert_stmt);
    if (rc != SQLITE_DONE) {
        fprintf(stderr, "Failed to update playlist: %s\n", sqlite3_errmsg(db));
        sqlite3_finalize(insert_stmt);
        sqlite3_close(db);
        return UPDATE_FAIL;
    }
    sqlite3_finalize(insert_stmt);

    // Đóng kết nối tới cơ sở dữ liệu
    sqlite3_close(db);

    return UPDATE_SUCCESS;
}

