#include <ncurses.h>

int main (void)
{
    initscr();

    /*
     * Control character (i.e. CTRL-Z)
     * are passed to the terminal
     */
    /* cbreak(); */

    printw("Waiting...");

    /*
     * Typing CTRL-Z now
     * will halt the program
     */
    getch();

    endwin();

    return 0;
}
