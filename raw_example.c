#include <ncurses.h>

int main (void)
{
    initscr();

    /*
     * Control characters (i.e. CTRL-C, CTRL-Z)
     * are passed to the program
     */
    raw();

    printw("Waiting...");

    /*
     * If you play CTRL-Z here
     * the program will register it
     * as the character it's wating for
     * and stop
     */
    getch();

    endwin();

    return 0;
}
