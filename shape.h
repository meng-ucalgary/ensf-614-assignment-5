/*
 * File Name:               shape.h
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 5 Exercise B
 * Lab section:             B01
 * Completed by:            Aastha Patel, Bhavyai Gupta
 * Submission Date:         October 26, 2021
 */

#include "point.h"

#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
protected:
    Point origin;
    char *shapeName;

public:
    Shape(double x, double y, const char *shapeName);

    virtual ~Shape();

    Shape(const Shape &s);

    Shape& operator=(const Shape &rhs);

    const Point &getOrigin() const;

    const char *getName() const;

    virtual void display() const;

    virtual double distance(Shape &other) const;

    static double distance(Shape &the_shape, Shape &other);

    virtual double area() const = 0;

    virtual double perimeter() const = 0;

    void move (double dx, double dy);
};

#endif
