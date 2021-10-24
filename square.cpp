/*
 * File Name:               square.cpp
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 5 Exercise B
 * Lab section:             B01
 * Completed by:            Aastha Patel, Bhavyai Gupta
 * Submission Date:         October 26, 2021
 */

#include "square.h"
#include "shape.h"
#include "point.h"
#include <stdio.h>

using namespace std;

Square::Square(double x, double y, double side, const char *shapeName): Shape(x, y, shapeName)
{
    this->set_side_a(side);
}

Square::~Square()
{
    // do nothing special
}

double Square::area() const
{
    return this->get_side_a() * this->get_side_a();
}

double Square::perimeter() const
{
    return this->get_side_a() * 4;
}

double Square::get_side_a() const
{
    return this->side_a;
}

void Square::set_side_a(double side)
{
    this->side_a = side;
}

void Square::display() const
{
    printf("Square Name: %s\n", this->getName());
    this->getOrigin().display();
    printf("Side a: %.2f\n", this->get_side_a());
    printf("Area: %.2f\n", this->area());
    printf("Perimeter: %.2f\n", this->perimeter());
}
