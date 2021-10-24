/*
 * File Name:               rectangle.cpp
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 5 Exercise B
 * Lab section:             B01
 * Completed by:            Aastha Patel, Bhavyai Gupta
 * Submission Date:         October 26, 2021
 */

#include "rectangle.h"
#include "square.h"
#include "shape.h"
#include "point.h"
#include <stdio.h>

using namespace std;

Rectangle::Rectangle(double x, double y, double a, double b, const char *shapeName): Square(x, y, a, shapeName)
{
    this->set_side_b(b);
}

double Rectangle::area() const
{
    return (this->get_side_a() * this->get_side_b());
}

double Rectangle::perimeter() const
{
    return (2*(this->get_side_a() + this->get_side_b()));
}

double Rectangle::get_side_b() const
{
    return this->side_b;
}

void Rectangle::set_side_b(double side)
{
    this->side_b = side;
}

void Rectangle::display() const
{
    printf("Rectangle Name: %s\n", this->getName());
    this->getOrigin().display();
    printf("Side a: %.2f\n", this->get_side_a());
    printf("Side b: %.2f\n", this->get_side_b());
    printf("Area: %.2f\n", this->area());
    printf("Perimeter: %.2f\n", this->perimeter());
}
