/*
 * File Name:               square.h
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 5 Exercise B
 * Lab section:             B01
 * Completed by:            Aastha Patel, Bhavyai Gupta
 * Submission Date:         October 26, 2021
 */

#include "shape.h"
#include "point.h"

#ifndef SQUARE_H
#define SQUARE_H

class Square : public Shape
{
protected:
    double side_a;

public:
    Square(double x, double y, double side, const char *shapeName);

    double area() const;

    double perimeter() const;

    double get_side_a() const;

    void set_side_a(double side);

    void display() const;
};

#endif
