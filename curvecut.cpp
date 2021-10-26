/*
 * File Name:               curvecut.cpp
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 5 Exercise C
 * Lab section:             B01
 * Completed by:            Aastha Patel, Bhavyai Gupta
 * Submission Date:         October 26, 2021
 */

#include "curvecut.h"
#include "circle.h"
#include "shape.h"
#include "point.h"

#include <stdio.h>
#include <math.h>
using namespace std;

CurveCut::CurveCut(double x, double y, double w, double l, double r, const char *shapeName) : Shape(x, y, shapeName), Circle(x, y, r, shapeName), Rectangle(x, y, w, l, shapeName)
{
    double minLength = w < l ? w : l;

    if (r > minLength)
    {
        fprintf(stderr, "\n[FAIL] The radius of the circle must be always less than or equal the smaller of the width and length. Exit!\n");
        exit(1);
    }
}

double CurveCut::area() const
{
    return (Rectangle::area() - (Circle::area() / 4));
}

double CurveCut::perimeter() const
{
    return Rectangle::perimeter() - (2 * this->get_radius()) + (Circle::perimeter() / 4);
}

void CurveCut::display() const
{
    printf("CurveCut Name: %s\n", this->getName());
    this->getOrigin().display();
    printf("Width: %.2f\n", this->get_side_a());
    printf("Length: %.2f\n", this->get_side_b());
    printf("Radius of the cut: %.2f\n", this->get_radius());
}
