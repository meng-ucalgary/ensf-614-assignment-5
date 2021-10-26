/*
 * File Name:               circle.h
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 5 Exercise C
 * Lab section:             B01
 * Completed by:            Aastha Patel, Bhavyai Gupta
 * Submission Date:         October 26, 2021
 */

#include "rectangle.h"
#include "shape.h"

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle : virtual public Shape
{
protected:
    double radius;

public:
    Circle(double x, double y, double r, const char *shapeName);
    // REQUIRES
    //    three args x,y for origin r for radius and a char pointer for name
    // PROMISES
    //    create Circle object from the given args

    double area() const;
    // PROMISES
    //    calculate & return the area of circle

    double perimeter() const;
    // PROMISES
    //    calculate and returns the perimeter of circle

    double get_radius() const;
    // PROMISES
    //    return the radius of circle

    void set_radius(double radius);
    // REQUIRES
    //    double arg for radius
    // PROMISES
    //    set the radius of circle

    void display() const;
    // PROMISES
    //    display Circle's origin, area, perimeter and name
};

#endif
