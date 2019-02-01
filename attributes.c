#include <ncurses.h>

#define LINES_NO 4

int main (void)
{
    int row, col;

    initscr();
    getmaxyx(stdscr, row, col);

    attron(A_STANDOUT);
    move((row - LINES_NO ) / 2, (col - 8) / 2);
    printw("Standout");
    attroff(A_STANDOUT);

    /* turn A_BOLD attribute on */
    attron(A_BOLD);
    move((row - LINES_NO ) / 2 + 1, (col - 4) / 2);
    printw("Bold");

    /* turn A_BOLD attribute off */
    attroff(A_BOLD);
    move((row - LINES_NO) / 2 + 2, (col - 6) / 2);
    printw("Normal");

    move((row - LINES_NO) / 2 + 3, (col - 6) / 2);
    attron(A_ITALIC);
    printw("Italic");
    attroff(A_ITALIC);

    move((row - LINES_NO) / 2 + 4, (col - 18) / 2);
    attron(A_UNDERLINE | A_DIM);
    printw("Underlined and dim");
    attroff(A_UNDERLINE | A_DIM);

    getch();
    endwin();

    return 0;
}
