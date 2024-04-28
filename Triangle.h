#include <iostream>
#include <string>
#include <cmath>
#include "Shape2D.h"

class Triangle : public Shape2D {
private:

	void CalculateArea() override {
		area = (base * height) / 2;
	}

	float base, height;

public:

	virtual void ShowInfo() = 0;
	virtual std::string GetName() = 0;

	Triangle(float base, float height)
		: base(base), height(height) {}

	string GetName() override {
		return "triangle";
	}
	
	float GetArea() override {
		CalculateArea();
		return this->area;
	}
	void ShowInfo() override {
		std::cout << "� ����������� " << std::endl;
		std::cout << "����� ��������� = " << base << std::endl;
		std::cout << "��� ������ = " << height << std::endl;
		std::cout << "��� ������� = " << this->GetArea() << "\n" << std::endl;
	}
};
