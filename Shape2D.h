#pragma once

#include "Shape.h"

class Shape2D : public Shape {
protected:

    float area;
    void virtual CalculateArea() = 0;

public:

    float GetArea() {
        CalculateArea();
        return area;
    }

    bool operator> (Shape2D* shape) {
        return area > shape->GetArea();
    }

    bool operator< (Shape2D* shape) {
        return !(area > shape->GetArea());
    }

    bool operator== (Shape2D* shape) {
        return area == shape->area;
    }

};
