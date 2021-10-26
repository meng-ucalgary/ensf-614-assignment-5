/*
 * File Name:               circle.cpp
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 5 Exercise B
 * Lab section:             C01
 * Completed by:            Aastha Patel, Bhavyai Gupta
 * Submission Date:         October 26, 2021
 */

#include "circle.h"
#include "shape.h"
#include "point.h"
#include <stdio.h>
#include <math.h>
#define PI 3.14

using namespace std;
Circle :: Circle(double x, double y, double r, const char *shapeName): Shape(x, y, shapeName)
{
    this->set_radius(r);
}


double Circle :: area() const
{
    return (PI * (sqrt(this->get_radius())));
}

double Circle :: perimeter() const
{
    return (2*PI*this->get_radius());
}

double Circle :: get_radius() const
{
    return this->radius;
}

void Circle :: set_radius(double r)
{
    this->radius = r;
}

void Circle :: display() const
{
    printf("circle Name: %s\n", this->getName());
    this->getOrigin().display();
    printf("Radius is : %.2f\n", this->get_radius());
    printf("Area: %.2f\n", this->area());
    printf("Perimeter: %.2f\n", this->perimeter());
}

