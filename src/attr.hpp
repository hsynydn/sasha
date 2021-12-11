#ifndef SRC_ATTR_HPP_
#define SRC_ATTR_HPP_

#include "style.hpp"

namespace sasha
{
namespace view
{
namespace attr
{

/**
 * @brief 
 * 
 */
struct cols{
public:
	cols(int _n):
	n(_n)
	{};
	struct cols& operator=(const cols& c){
		n = c.n;
		return *this;
	}
	int n;
};

/**
 * @brief 
 * 
 */
struct lines{
public:
	lines(int _n):
	n(_n)
	{};
	struct lines& operator=(const lines& l){
		n = l.n;
	return *this;
	}
	int n;
};

struct location{
public:
	location(int _x, int _y)
	{
        x = new cols(_x);
        y = new lines(_y);
    };
	struct location& operator=(const location& p){
		*x = *(p.x);
		*y = *(p.y);
    	return *this;
	}
    cols* x;
    lines* y;
};

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

    T& get_attr(){
        return *__t;
    }
private:
    T* __t;
};

typedef __attr__<struct cols>           width;
typedef __attr__<struct lines>          height;
typedef __attr__<sasha::style::color>   bgcolor;
typedef __attr__<sasha::style::color>   fgcolor;
typedef __attr__<sasha::style::text>    text;
typedef __attr__<struct location>       placement;
}
}
}

#endif /* SRC_ATTR_HPP_ */
