#include <ncurses.h>

int main (void)
{
    int rc;

    initscr();

    /* Until the Esc key is pressed */
    while ((rc = getch() ) != 27)
    {
        /* Check if the window was resized */
        if (rc == KEY_RESIZE)
            printw ("Window resized\n");
    }

    endwin();

    return 0;
}
