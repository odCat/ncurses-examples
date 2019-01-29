#include <ncurses.h>
#include <string.h>

#define STR "Hello, World!"

int main (void)
{
    int row, col;

    initscr();

    /* Retrieve the numbers of rows and columns */
    getmaxyx (stdscr, row, col);

    /* Move the cursor to row & col */
    move (row/2, (col - strlen(STR))/2);
    printw (STR);
    getch();

    endwin();

    return 0;
}
