#include <iostream>
#include <string>
#include <cmath>

class Shape3D : public Shape {
private:
public:
	float volume;
	virtual float GetVolume() = 0;
	virtual void CalculateVolume() = 0;
};
