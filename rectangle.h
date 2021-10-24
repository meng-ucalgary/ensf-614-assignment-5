/*
 * File Name:               rectangle.h
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 5 Exercise B
 * Lab section:             B01
 * Completed by:            Aastha Patel, Bhavyai Gupta
 * Submission Date:         October 26, 2021
 */

#include "square.h"

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle : public Square
{
protected:
    double side_b;

public:
    Rectangle(double x, double y, double a, double b, const char *shapeName);

    ~Rectangle();

    double area() const;

    double perimeter() const;

    double get_side_b() const;

    void set_side_b(double side);

    void display() const;
};

#endif
