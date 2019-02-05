/* Failed experiment */

#include <ncurses.h>

#define COLOR_PINK 8

int main (void)
{
    initscr();

    if (!has_colors())
    {
        printf ("The terminal does not support colors\n");
        endwin();
        return 1;
    }

    start_color();
    int row, col;
    getmaxyx (stdscr, row, col);

    /* HOW DOES INIT_COLOR() WORK? */
    /* init_color(COLOR_PINK, 1000, 80, 600); */
    init_color(COLOR_RED, 255, 20, 147);

    init_pair (1, COLOR_RED, COLOR_BLACK);
    attron (COLOR_PAIR(1));
    move (row / 2, (col - 19) / 2);
    printw ("Custom colored text");
    attroff (COLOR_PAIR(1));

    getch();
    endwin();
    return 0;
}
