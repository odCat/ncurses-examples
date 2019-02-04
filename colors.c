#include <ncurses.h>
#include <string.h>

int main (void)
{
    initscr();

    /*
     * Check to see if the terminal
     *  display colors
     */
    if (!has_colors())
    {
        endwin();
        printf ("Your terminal does not support colors\n");
        return(1);
    }

    int row, col;
    getmaxyx (stdscr, row, col);

    /*
     * Start using colors
     */
    start_color();

    /*
     * Initialize a color pair
     * foreground, background
     */
    init_pair (1, COLOR_GREEN, COLOR_BLACK);
    attron(COLOR_PAIR(1));  /* Start using color pair 1 */
    move (row / 2 - 2, (col - strlen("Green text")) / 2);
    printw ("Green text");
    attroff(COLOR_PAIR(1)); /* Stop using color pair 1 */

    init_pair (2, COLOR_YELLOW, COLOR_BLACK);
    attron (COLOR_PAIR(2));
    move (row / 2 - 1, (col - strlen("Yellow text")) / 2);
    printw ("Yellow text");
    attroff (COLOR_PAIR(2));

    init_pair (3, COLOR_WHITE, COLOR_BLUE);
    attron (COLOR_PAIR(3));
    move (row / 2, (col - strlen(
          "White text with blue background")) / 2);
    printw ("White text with blue background");
    attroff (COLOR_PAIR(3));

    init_pair (4, COLOR_CYAN, COLOR_RED);
    attron (COLOR_PAIR(4));
    move (row / 2 + 1, (col - strlen(
          "                            ")) / 2);
    printw ("                            ");
    attroff (COLOR_PAIR(4));

    getch();
    endwin();
    return 0;
        
}
