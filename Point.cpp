/*
 * File Name:               point.cpp
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 5 Exercise B
 * Lab section:             B01
 * Completed by:            Aastha Patel, Bhavyai Gupta
 * Submission Date:         October 26, 2021
 */

#include "point.h"
#include <stdio.h>
#include <math.h>
using namespace std;

int Point::num_of_objects = 0;

Point::Point(double x, double y)
{
    this->x = x;
    this->y = y;
    this->id = ++num_of_objects + 1000;
}

Point::Point(const Point &P)
{
    this->x = P.getx();
    this->y = P.gety();
    this->id = ++num_of_objects + 1000;
}

Point &Point::operator=(const Point &rhs)
{
    if (this != &rhs)
    {
        this->x = rhs.getx();
        this->y = rhs.gety();
        this->id = ++num_of_objects + 1000;
    }

    return *this;
}

Point::~Point()
{
    --num_of_objects;
}

void Point::display() const
{
    printf("X-coordinate: %.2f\n", getx());
    printf("Y-coordinate: %.2f\n", gety());
}

double Point::getx() const
{
    return this->x;
}

double Point::gety() const
{
    return this->y;
}

void Point::setx(double x)
{
    this->x = x;
}

void Point::sety(double y)
{
    this->y = y;
}

int Point::counter() const
{
    return num_of_objects;
}

double Point::distance(const Point &P) const
{
    double dx2 = pow((this->getx() - P.getx()), 2);
    double dy2 = pow((this->gety() - P.gety()), 2);

    return sqrt(dx2 + dy2);
}

double Point::distance(const Point &P, const Point &Q)
{
    double dx2 = pow((P.getx() - Q.getx()), 2);
    double dy2 = pow((P.gety() - Q.gety()), 2);

    return sqrt(dx2 + dy2);
}
