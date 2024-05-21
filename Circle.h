#include <iostream>
#include <string>
#include <cmath>
#include "Shape2D.h"

constexpr auto PI = 3.14;

class Circle : public Shape2D {
private:
    float radius;
    void CalculateArea() override {
        area = radius * radius * 3, 1415;
    }

public:
    Circle(float radius)
        :radius(radius) {}

    void Scale(float scaleFactor) override
    {

        radius *= scaleFactor;
        CalculateArea();

    };

    void ShowInfo() override
    {
        std::cout << "Я - " << GetName() << "Моя площадь - " << GetArea() << "!\n\tМой радиус - " << radius << "!";
    }

    std::string GetName() override
    {
        return "круг!\n\t";
    }

};
