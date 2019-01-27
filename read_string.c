#include <ncurses.h>
#include <string.h>

int main (void)
{
    initscr();

    int row, col;
    char *str;
    getmaxyx (stdscr, row, col);

    move (row/2, col/2);
    /*
     * Read a string
     */
    getstr(str);

    /*
     * Clear the screen
     */
    clear();
    move (row/2, (col - strlen(str))/2);
    printw (str);
    getch();

    endwin();

    return 0;
}
