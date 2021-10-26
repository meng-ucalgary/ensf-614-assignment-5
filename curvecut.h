/*
 * File Name:               curvecut.h
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 5 Exercise B
 * Lab section:             C02
 * Completed by:            Aastha Patel, Bhavyai Gupta
 * Submission Date:         October 26, 2021
 */

#include "rectangle.h"
#include "Circle.h"
#ifndef CURVECUT_H
#define CURVECUT_H

class CurveCut : public Circle,public Rectangle
{

protected:

double width;

public:

    CurveCut(double x, double y, double a, double w,double r, const char *shapeName);

    double area() const;

    double perimeter() const;

    double get_width() const;

    void set_width(double w);

    void display() const;

};
#endif

