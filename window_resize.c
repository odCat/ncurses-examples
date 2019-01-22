#include <ncurses.h>

int main (void)
{
    int rc;

    initscr();

    while (1)
    {
        rc = getch();
        if (rc == KEY_RESIZE)
            printw ("Window resized\n");
        if (rc == 27)
            break;
    }

    endwin();

    return 0;
}
