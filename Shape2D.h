#include <iostream>
#include <string>
#include <cmath>
#include "Shape.h"

class Shape2D : public Shape {
protected:

	virtual void CalculateArea() = 0;
	float area;

public:

	virtual float GetArea() = 0;
};
