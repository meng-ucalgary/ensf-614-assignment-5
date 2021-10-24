/*
 * File Name:               point.h
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 5 Exercise B
 * Lab section:             B01
 * Completed by:            Aastha Patel, Bhavyai Gupta
 * Submission Date:         October 26, 2021
 */

#ifndef POINT_H
#define POINT_H

class Point
{
private:
    double x;
    double y;
    int id;
    static int num_of_objects;

public:
    Point(double a, double b);
    // REQUIRES
    //    two arguments of type double
    // PROMISES
    //    creates Point object with arguments a and b of double type
    //    assigns appropriate id to the object created
    //    increments num_of_objects

    ~Point();
    // PROMISES
    //    destroys the Point object and decrements num_of_objects

    Point(const Point &P);
    // REQUIRES
    //    reference of Point object as argument P
    // PROMISES
    //    creates Point object with deep copy of data members of P
    //    assigns appropriate id to the object created
    //    increments num_of_objects

    Point &operator=(const Point &rhs);
    // REQUIRES
    //    reference of Point object on right hand side of =
    // PROMISES
    //    deep copy of data members of rhs to object being created
    //    assigns appropriate id to the object being created
    //    increments num_of_objects

    void display() const;
    // PROMISES
    //    prints the Point object on stdout

    double getx() const;
    // PROMISES
    //    returns the x co-ordinate of Point

    double gety() const;
    // PROMISES
    //    returns the y co-ordinate of Point

    void setx(double a);
    // REQUIRES
    //    an argument of type double
    // PROMISES
    //    sets the x co-ordinate of Point as a

    void sety(double b);
    // REQUIRES
    //    an argument of type double
    // PROMISES
    //    sets the y co-ordinate of Point as b

    int counter() const;
    // PROMISES
    //    returns the num_of_objects

    double distance(const Point &P) const;
    // REQUIRES
    //    reference to Point object
    // PROMISES
    //    returns the distance between this Point and P on the cartesian plane

    static double distance(const Point &P, const Point &Q);
    // REQUIRES
    //    two references to Point objects as arguments
    // PROMISES
    //    returns the distance between P and Q on the cartesian plane
};

#endif
