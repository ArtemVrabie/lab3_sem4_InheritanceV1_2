#include <iostream>
#include <string>
#include <cmath>
#include "Shape3D.h"
#include "Triangle.h"

class TriangularPyramid : public Shape3D {

private:

	Triangle baseTriangle;
	float PyramidHeight;

public:

	TriangularPyramid(float h, float base, float height)
		:PyramidHeight(h), baseTriangle(base, height) {}

	float GetVolume() override {
		return volume;
	}
	string GetName() override {
		return "Я треугольная пирамида!";
	}
	void CalculateVolume() override {
		baseTriangle.CalculateArea();
		volume = baseTriangle.GetArea() * PyramidHeight * 1 / 3;
	}
	void ShowInfo() override {
		std::cout << this->GetName() << std::endl;
		std::cout << "Моя высота = " << PyramidHeight << std::endl;
		std::cout << "Мой объем = " << this->GetVolume() << "\n" << std::endl;
	}

};

