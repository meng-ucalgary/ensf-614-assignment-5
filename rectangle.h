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
    // REQUIRES
    //    four arguments of type double and a pointer to built-in string
    // PROMISES
    //    creates Rectangle object with the supplied arguments

    double area() const;
    // PROMISES
    //    returns area of the rectangle

    double perimeter() const;
    // PROMISES
    //    returns perimeter of the rectangle

    double get_side_b() const;
    // PROMISES
    //    returns side_b of the Rectangle

    void set_side_b(double side);
    // REQUIRES
    //    an argument of type double
    // PROMISES
    //    sets the side_b of Rectangle as side

    void display() const;
    // PROMISES
    //    prints the Rectangle object to stdout
};

#endif
