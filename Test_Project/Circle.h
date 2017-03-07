#include<iostream>

class Circle {
private:
	float coorX;
	float coorY;
	float radius;
public:
	Circle(const float &a, const float &b, const float &r) : coorX{ a }, coorY{ b }, radius{ r } {}
	~Circle();
	float GetRadio();
	float Area();
};
