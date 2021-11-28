#include "window.hpp"

#include <ncurses.h>

sasha::view::window::window(){
    initscr();
    cbreak();
    refresh();
}

sasha::view::window::~window(){
	endwin();
}
