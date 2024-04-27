#include <iostream>
#include <string>
#include <cmath>
#include <Shape2D.h>

constexpr auto PI = 3.14;

class Circle : public Shape2D {
private:
	float radius;
public:
	Circle(float radius)
		:radius(radius) {}
	void CalculateArea() override {
		this->area = radius * radius * PI;
	}
	float GetArea() override {
		return this->area;
	}
	string GetName() override {
		return "Я круг! ";
	}
	void ShowInfo() override {
		std::cout << this->GetName() << std::endl;
		std::cout << "Мой радиус = " << radius << std::endl;
		std::cout << "Моя площадь = " << this->GetArea() << "\n" << std::endl;
	}
};
