#include <iostream>
#include <string>
#include <cmath>

class Sphere : public Shape3D {
private:
	float radius;
public:
	Sphere(float radius)
		:radius(radius) {}

	float GetVolume() override {
		return volume;
	}
	string GetName() override {
		return "Я сфера!";
	}
	void CalculateVolume() override {
		volume = 4 / 3 * PI * pow(radius, 3);
	}
	void ShowInfo() override {
		CalculateVolume();
		std::cout << this->GetName() << std::endl;
		std::cout << "Мой радиус = " << radius << std::endl;
		std::cout << "Мой объем = " << this->GetVolume() << "\n" << std::endl;
	}
};
