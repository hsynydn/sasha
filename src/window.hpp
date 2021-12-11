#ifndef SRC_WINDOW_HPP_
#define SRC_WINDOW_HPP_

#include <stdint.h>
#include <vector>

#include "view.hpp"

namespace sasha
{
namespace view
{

class window{
public:
	window();
	~window();

	void place(sasha::view::layout& l){
		layout_vector.push_back(&l);
	}

	void build(){
		for(auto x : layout_vector){
			x->build();
		}
	}
private:
	uint8_t width;
	uint8_t height;

	std::vector<sasha::view::layout*> layout_vector;
};

}
}

#endif /* SRC_WINDOW_HPP_ */
