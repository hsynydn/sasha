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

struct layout{
public:
    layout(){};
    void set_attr(sasha::view::attr::dimension& d){
        width = d;
    };
private:
    sasha::view::attr::dimension   width;
    sasha::view::attr::dimension   height;
    sasha::view::attr::color       bgColor;
    sasha::view::attr::color       fgColor;
};

}
}

#endif /* SRC_W_WRAPPER_HPP_ */
