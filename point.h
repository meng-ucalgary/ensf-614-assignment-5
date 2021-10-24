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

    ~Point();

    Point(const Point &P);

    Point &operator=(const Point &rhs);

    void display() const;

    double getx() const;

    double gety() const;

    void setx(double a);

    void sety(double b);

    int counter() const;

    double distance(const Point &P) const;

    static double distance(const Point &P, const Point &Q);
};

#endif
