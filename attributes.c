#include <ncurses.h>

int main (void)
{
    int row, col;

    initscr();
    getmaxyx(stdscr, row, col);

    /* turn A_BOLD attribute on */
    attron(A_BOLD);

    move((row - 3 ) / 2, (col - 4) / 2);
    printw("Bold\n");

    /* turn A_BOLD attribute off */
    attroff(A_BOLD);
    move((row - 3) / 2 + 1, (col - 8) / 2);
    printw("Not bold\n");

    move((row - 3) / 2 + 2, (col - 6) / 2);
    attron(A_ITALIC);
    printw("Italic\n");
    attroff(A_ITALIC);

    getch();
    endwin();

    return 0;
}
