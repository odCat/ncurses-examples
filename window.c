#include <ncurses.h> 

int main (void)
{
    WINDOW *test_win;
    int startx, starty, width, height;

    initscr();
    if (has_colors() == FALSE)
    {
        endwin();
        printf("Your terminal does not support colors\n");
        return 1;
    }
    start_color();


    height = 3;
    width = 11;
    startx = (COLS - width) / 2;
    starty = (LINES - height) / 2;

    /* This refresh is mandatory,
     *  without it the child window
     *  will not be displayed
     */
    refresh();

    /*
     * Create a new window
     *  WINDOW * newwin(int, int, int, int);
     */
    test_win = newwin(height, width, starty, startx);
    init_pair (1, COLOR_GREEN, COLOR_RED);
    wattron (test_win, COLOR_PAIR(1));

    /*
    * Create a border for the 
    *  window with default characters
    */
    box (test_win, 0, 0);
    wmove(test_win, 1, 1);
    wprintw (test_win, "TEST_TEXT");
    wrefresh(test_win);
    wattroff (test_win, COLOR_PAIR(1));


    getch();

    /*
     * It does not remove the window content
     */
    delwin(test_win);
    endwin();
    return 0;
}
