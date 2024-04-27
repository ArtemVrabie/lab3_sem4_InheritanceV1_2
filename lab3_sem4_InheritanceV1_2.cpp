
#include <iostream>
#include <string>
#include <cmath>

#include "Shape.h"
#include "Shape2D.h"
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Shape3D.h"
#include "TriangularPyramid.h"
#include "Cylinder.h"
#include "Sphere.h"

using namespace std;
constexpr auto PI = 3.14;

int main() {
	setlocale(LC_ALL, "rus");

	Square sq(3.0);
	sq.CalculateArea();
	sq.ShowInfo();

	Triangle tr(4.0, 5.0);
	tr.CalculateArea();
	tr.ShowInfo();

	Circle ci(5);
	ci.CalculateArea();
	ci.ShowInfo();

	TriangularPyramid tp(10.0, 4.0, 5.0);
	tp.CalculateVolume();
	tp.ShowInfo();

	Cylinder cy(15.0, 5.0);
	cy.CalculateVolume();
	cy.ShowInfo();

	Sphere sp(5.4);
	sp.ShowInfo();

}








