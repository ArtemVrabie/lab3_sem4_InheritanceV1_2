#include <iostream>
#include <string>
#include <cmath>
#include "Shape3D.h"
#include "Circle.h"

class Cylinder : public Shape3D {

private:

	Circle baseCircle;
	float CylinderHeight;

public:

	Cylinder(float CylinderHeight, float radius)
		:CylinderHeight(CylinderHeight), baseCircle(radius) {}

	float GetVolume() override {
		return volume;
	}
	string GetName() override {
		return "Я цилиндр!";
	}
	void CalculateVolume() override {
		baseCircle.CalculateArea();
		volume = baseCircle.GetArea() * CylinderHeight * 1 / 3;
	}
	void ShowInfo() override {

		std::cout << this->GetName() << std::endl;
		std::cout << "Моя высота = " << CylinderHeight << std::endl;
		std::cout << "Мой объем = " << this->GetVolume() << "\n" << std::endl;
	}
};
