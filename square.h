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

class Square : virtual public Shape
{
protected:
    double side_a;

public:
    Square(double x, double y, double side, const char *shapeName);
    // REQUIRES
    //    three arguments of type double and a pointer to built-in string
    // PROMISES
    //    creates Square object with the supplied arguments

    double area() const;
    // PROMISES
    //    returns area of the square

    double perimeter() const;
    // PROMISES
    //    returns perimeter of the square

    double get_side_a() const;
    // PROMISES
    //    returns side_a of the Square

    void set_side_a(double side);
    // REQUIRES
    //    an argument of type double
    // PROMISES
    //    sets the side_a of Square as side

    void display() const;
    // PROMISES
    //    prints the Square object to stdout
};

#endif
