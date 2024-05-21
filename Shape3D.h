#include <iostream>
#include <string>
#include "Shape.h"

class Shape3D : public Shape {
protected:
    float volume = 0;
    void virtual CalculateVolume() = 0;
public:
    void GetVolume() {
        CalculateVolume();
        std::cout << "\n\t Мой объем - " << volume << "!!!\n\t";
    }

    bool operator> (Shape3D* shape) {
        return volume > shape->volume;
    }

    bool operator< (Shape3D* shape) {
        return !(volume > shape->volume);
    }

    bool operator== (Shape3D* shape) {
        return volume == shape->volume;
    }


};
