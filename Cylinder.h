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
		return "� �������!";
	}
	void CalculateVolume() override {
		baseCircle.CalculateArea();
		volume = baseCircle.GetArea() * CylinderHeight * 1 / 3;
	}
	void ShowInfo() override {

		std::cout << this->GetName() << std::endl;
		std::cout << "��� ������ = " << CylinderHeight << std::endl;
		std::cout << "��� ����� = " << this->GetVolume() << "\n" << std::endl;
	}
};
