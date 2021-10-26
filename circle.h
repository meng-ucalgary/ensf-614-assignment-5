#include "shape.h"
#include "rectangle.h"
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle : virtual public Shape
{

protected:

    double radius;

public:

    Circle(double x, double y, double r, const char *shapeName);

    ~Circle();

    double area() const;

    double perimeter() const;

    double get_radius() const;

    void set_radius(double radius);

    void display() const;

};
#endif
