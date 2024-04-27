#include <iostream>
#include <string>
#include <cmath>

class Shape2D : public Shape {
public:
	float area;
	virtual void CalculateArea() = 0;
	virtual float GetArea() = 0;
};
