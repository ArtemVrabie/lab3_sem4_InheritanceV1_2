
#include <string>

class Shape {
private:

	std::string name;

public:

	virtual void Scale(float scaleFactor) = 0;

	virtual void ShowInfo() = 0;

	std::string virtual GetName() = 0;
};

