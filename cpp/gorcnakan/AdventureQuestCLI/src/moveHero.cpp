/* #include "../include/moveHero.h"

void moveHero() {
    initscr();
    cbreak();
    keypad(stdscr, TRUE);
    noecho();

    printw("Use arrow keys to move (press 'q' to quit):\n");

    int key;
    while (true) {
        key = getch();

        switch (key) {
            case KEY_UP:
                printw("Moved up!\n");
                break;
            case KEY_DOWN:
                printw("Moved down!\n");
                break;
            case KEY_LEFT:
                printw("Moved left!\n");
                break;
            case KEY_RIGHT:
                printw("Moved right!\n");
                break;
            case 'q':
                printw("Exiting...\n");
                endwin();
                return;
            default:
                printw("Invalid key! Use arrow keys or 'q' to quit.\n");
        }
    }
} */
