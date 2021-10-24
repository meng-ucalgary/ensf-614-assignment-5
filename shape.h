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
    // REQUIRES
    //    two arguments of type double and a pointer to built-in string
    // PROMISES
    //    creates Shape object with the supplied arguments

    virtual ~Shape();
    // PROMISES
    //    destroys the Shape object
    //    deallocates the memory referenced by shapeName

    Shape(const Shape &s);
    // REQUIRES
    //    reference of Shape object as argument s
    // PROMISES
    //    creates Shape object with deep copy of data members of s

    Shape& operator=(const Shape &rhs);
    // REQUIRES
    //    reference of Shape object on right hand side of =
    // PROMISES
    //    deep copy of data members of rhs to object being created

    const Point &getOrigin() const;
    // PROMISES
    //    returns reference to origin

    const char *getName() const;
    // PROMISES
    //    returns pointer to shapeName

    virtual void display() const;
    // PROMISES
    //    prints the Shape object on stdout

    virtual double distance(Shape &S) const;
    // REQUIRES
    //    reference to Shape object
    // PROMISES
    //    returns the distance between this Shape and S on the cartesian plane

    static double distance(Shape &S, Shape &T);
    // REQUIRES
    //    two references to Shape objects as arguments
    // PROMISES
    //    returns the distance between S and T on the cartesian plane

    virtual double area() const = 0;
    // PROMISES
    //    returns the area of the Shape

    virtual double perimeter() const = 0;
    // PROMISES
    //    returns the perimeter of the Shape

    void move (double dx, double dy);
    // PROMISES
    //    updates the origin of Shape by moving co-ordinates by (dx, dy)
};

#endif
