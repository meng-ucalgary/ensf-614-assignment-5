#include "curvecut.h"
#include "circle.h"
#include "shape.h"
#include "point.h"
#include <stdio.h>
#include <math.h>
#define PI 3.14

using namespace std;

CurveCut :: CurveCut(double x, double y, double w,double l , double r,const char *shapeName) : Circle(x,y,r,shapeName),Rectangle(x,y,w,l,r,shapeName)
{
    this-> set_width(w);
}

CurveCut ::~ CurveCut()
{   }

double CurveCut :: area() const
{
    return ((this->get_side_a() * this->get_width())) - ((PI * (sqrt(this->get_radius()))) / 4 )  ;
}

double CurveCut :: perimeter() const
{
    return (2*(this->get_side_a() + this->get_side_b())) - ((2*PI*this->radius)/4);
}

double CurveCut :: get_width() const
{
    return this->width;
}


void CurveCut :: display() const
{
    printf("CurveCut Name: %s\n", this->getName());
    this->getOrigin().display();
    printf("Radius is : %.2f\n", this->get_radius());
    printf("width is : %.2f\n", this->get_width());
    printf("Area: %.2f\n", this->area());
    printf("Perimeter: %.2f\n", this->perimeter());
}


