#include <iostream>
#include <string>
#include <cmath>

class Triangle : public Shape2D {
private:
	float base, height;
public:
	virtual void ShowInfo() = 0;
	virtual std::string GetName() = 0;

	Triangle(float base, float height)
		: base(base), height(height) {}

	string GetName() override {
		return "triangle";
	}
	void CalculateArea() override {
		area = (base * height) / 2;
	}
	float GetArea() override {
		return this->area;
	}
	void ShowInfo() override {
		std::cout << "Я треугольник " << std::endl;
		std::cout << "Длина основания = " << base << std::endl;
		std::cout << "Моя высота = " << height << std::endl;
		std::cout << "Моя площадь = " << this->GetArea() << "\n" << std::endl;
	}
};
