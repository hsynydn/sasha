#ifndef SRC_ATTR_HPP_
#define SRC_ATTR_HPP_

#include "style.hpp"

namespace sasha
{
namespace view
{
namespace attr
{

template <class T>
struct __attr__{
public:
    __attr__()
    {};

    __attr__(T& t)
    :
    __t(new T(t))
    {};

    __attr__(T&& t)
    :
    __t(new T(t))
    {};

    struct __attr__& operator=(struct __attr__& o){
        __t = o.__t;
        return *this;
    }
private:
    T* __t;
};

typedef __attr__<int>                   dimension;
typedef __attr__<sasha::style::color>   color;
typedef __attr__<sasha::style::text>    text;
}
}
}

#endif /* SRC_ATTR_HPP_ */
