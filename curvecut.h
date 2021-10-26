#include "rectangle.h"
#include "Circle.h"
#ifndef CURVECUT_H
#define CURVECUT_H

class CurveCut : public Circle,public Rectangle
{

protected:

double width;

public:

    CurveCut(double x, double y, double a, double w,double r, const char *shapeName);

    ~CurveCut();

    double area() const;

    double perimeter() const;

    double get_width() const;

    void set_width(double w);

    void display() const;

};
#endif

