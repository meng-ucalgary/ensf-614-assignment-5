/*
 * File Name:               curvecut.h
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 5 Exercise C
 * Lab section:             B01
 * Completed by:            Aastha Patel, Bhavyai Gupta
 * Submission Date:         October 26, 2021
 */

#include "circle.h"
#include "rectangle.h"

#ifndef CURVECUT_H
#define CURVECUT_H

class CurveCut : public Circle, public Rectangle
{
protected:
    double width;

public:
    CurveCut(double x, double y, double a, double w, double r, const char *shapeName);
    // REQUIRES
    //    five args x, y for origin a, w for rectangle r for circle and a char pointer for name
    // PROMISES
    //    create CurveCut object from the given args

    double area() const;
    // PROMISES
    //    calculate & return the area of curvecut

    double perimeter() const;
    // PROMISES
    //    calculate & return the perimeter of curvecut

    void display() const;
    // PROMISES
    //    displays CurveCut's origin, length, width, radius and name
};
#endif
