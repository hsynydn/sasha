#ifndef SRC_COLOR_HPP_
#define SRC_COLOR_HPP_

namespace sasha
{
namespace style
{

struct color
{
public:
	color(int _r, int _g, int _b)
	:
	r(_r),
	g(_g),
	b(_b)
	{};
private:
	int r;
	int g;
	int b;
};

enum class text{
	BOLD,
	UNDERLINE
};

}
}



#endif /* SRC_COLOR_HPP_ */
