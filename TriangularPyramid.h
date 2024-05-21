#include <iostream>
#include "Shape3D.h"
#include "Triangle.h"

class TriangularPyramid : public Shape3D {
private:
    Triangle* triangle;
    float height;
    void CalculateVolume() override {
        volume = triangle->GetArea() * height / 3;
    }
public:
    TriangularPyramid(Triangle* triangle, float height)
        : triangle(triangle), height(height) {}

    void Scale(float scaleFactor) override
    {

        triangle->Scale(scaleFactor);
        height *= scaleFactor;
        CalculateVolume();

    };

    void ShowInfo() override
    {
        std::cout << "Я - " << GetName();
        GetVolume();
        std::cout << "Площадь моего основания - " << triangle->GetArea() << "!\n\tМоя высота - " << height << "!";
    }

    std::string GetName() override
    {
        return "треугольная пирамида!\n\t";
    }


};

