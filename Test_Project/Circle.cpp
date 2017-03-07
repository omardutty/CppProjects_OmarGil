#include"Circle.h"

Circle::Circle(const float &a, const float &b, const float &r):coorX{a}, coorY{b}, radius{r} {}

Circle::~Circle() {}

float Circle::GetRadio() {
	return radius;
};

float Circle::Area() {
	return 3.14*radius*radius;
};

