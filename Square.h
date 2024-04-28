#include <iostream>
#include <string>
#include <cmath>
#include "Shape2D.h"

class Square : public Shape2D {
private:
	float side;
public:
	Square(float side)
		: side(side) {}
	void CalculateArea() override {
		this->area = side * side;
	}
	string GetName() {
		return "Square";
	}
	float GetArea() override {
		CalculateArea();
		return this->area;
	}
	void ShowInfo() override {
		CalculateArea();
		std::cout << "� ������� " << std::endl;
		std::cout << "��� ������� = " << side << std::endl;
		std::cout << "��� ������� = " << GetArea() << "\n" << std::endl;
	}
};
