#ifndef SRC_W_WRAPPER_HPP_
#define SRC_W_WRAPPER_HPP_

#include "attr.hpp"

#include <ncurses.h>
#include <menu.h>
#include <panel.h>

namespace sasha
{
namespace view
{

struct __window__{
public:
    __window__(){};

    ~__window__(){
        delwin(__w__);
    }

    void create(int nlines, int ncols, int begin_y, int begin_x){
        __w__ = newwin(nlines, ncols, begin_y, begin_x);
        box(__w__, 0, 0);
        wrefresh(__w__);
    }
private:
    WINDOW* __w__;
};

struct layout{
public:
    layout(){};
    void set_attr(sasha::view::attr::width& w){
        width = w;
    };

    void set_attr(sasha::view::attr::height& h){
        height = h;
    };

    void set_attr(sasha::view::attr::placement& l){
        position = l;
    };

    void build(){
        w = new __window__();
        w->create(height.get_attr().n, width.get_attr().n, position.get_attr().x->n, position.get_attr().y->n);
    }
private:
    sasha::view::attr::width        width;
    sasha::view::attr::height       height;
    sasha::view::attr::bgcolor      bgColor;
    sasha::view::attr::fgcolor      fgColor;
    sasha::view::attr::placement    position;

    __window__* w;
};

}
}

#endif /* SRC_W_WRAPPER_HPP_ */
