#include "view.hpp"
#include "attr.hpp"

#include <iostream>
#include <chrono>
#include <thread>

/*
**
*/
int main(int argc, char** argv){
	std::cout << "sasha test ..." << std::endl;

	sasha::view::attr::width w(100);
	sasha::view::attr::height h(100);
	sasha::view::attr::fgcolor textColor(sasha::style::color(0, 0, 0));
	sasha::view::attr::text textStyle(sasha::style::text::BOLD);

	sasha::view::layout l;
	l.set_attr(w);
	// l.set_attr(height);
	// l.set_attr(textColor);
	// l.set_attr(textStyle);

	std::this_thread::sleep_for(std::chrono::milliseconds(5000));	
	return 0;
}
