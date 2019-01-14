#include <ncurses.h>

int main (void)
{
    /*
     * Initializes the curses mode
     * Allocates memory for data structures
     * etc.
     */
    initscr();


    /*
     * Prints to _stdscr_
     * at current location
     */
    printw("Hello, World!\n");

    /*
     * It's supose to update the screen
     * but the program works without it
     */
    refresh();

    /*
     * Wait for a character to be typed
     */
    getch();

    printw("Hello, World, Again!");
    getch();

    /*
     * End the curses mode
     * Frees memory and returns to normal mode
     */
    endwin();

    return 0;
}
