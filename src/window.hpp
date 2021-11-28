#ifndef SRC_WINDOW_HPP_
#define SRC_WINDOW_HPP_

#include <stdint.h>

namespace sasha
{
namespace view
{

class window{
public:
	window();
	~window();
private:
	uint8_t width;
	uint8_t height;
};

}
}

#endif /* SRC_WINDOW_HPP_ */
