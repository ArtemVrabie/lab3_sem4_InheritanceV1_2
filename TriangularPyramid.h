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
        std::cout << "� - " << GetName();
        GetVolume();
        std::cout << "������� ����� ��������� - " << triangle->GetArea() << "!\n\t��� ������ - " << height << "!";
    }

    std::string GetName() override
    {
        return "����������� ��������!\n\t";
    }


};

