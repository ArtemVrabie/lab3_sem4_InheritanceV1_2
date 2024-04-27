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
		return "� �����!";
	}
	void CalculateVolume() override {
		volume = 4 / 3 * PI * pow(radius, 3);
	}
	void ShowInfo() override {
		CalculateVolume();
		std::cout << this->GetName() << std::endl;
		std::cout << "��� ������ = " << radius << std::endl;
		std::cout << "��� ����� = " << this->GetVolume() << "\n" << std::endl;
	}
};
