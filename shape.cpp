/*
 * File Name:               shape.cpp
 * Course:                  ENSF 614 - Fall 2021
 * Lab # and Assignment #:  Lab 5 Exercise B
 * Lab section:             B01
 * Completed by:            Aastha Patel, Bhavyai Gupta
 * Submission Date:         October 26, 2021
 */

#include "shape.h"
#include "point.h"
#include <stdio.h>
#include <string.h>
using namespace std;

Shape::Shape(double x, double y, const char *shapeName) : origin(Point(x, y))
{
    // this->origin = Point(x, y);
    this->shapeName = new char[strlen(shapeName) + 1];
    strcpy(this->shapeName, shapeName);
}

Shape::~Shape()
{
    delete[] this->shapeName;
    this->shapeName = nullptr;
}

Shape::Shape(const Shape &s) : origin(Point(s.getOrigin().getx(), s.getOrigin().gety()))
{
    this->shapeName = new char[strlen(s.getName()) + 1];
    strcpy(this->shapeName, s.getName());
}

Shape &Shape::operator=(const Shape &rhs)
{
    if (this != &rhs)
    {
        delete[] this->shapeName;

        this->origin = Point(rhs.getOrigin().getx(), rhs.getOrigin().gety());
        this->shapeName = new char[strlen(rhs.getName()) + 1];
        strcpy(this->shapeName, rhs.getName());
    }

    return *this;
}

void Shape::display() const
{
    printf("Shape Name  : %s\n", this->getName());
    this->getOrigin().display();
}

const Point &Shape::getOrigin() const
{
    return this->origin;
}

const char *Shape::getName() const
{
    return this->shapeName;
}

double Shape::distance(Shape &other) const
{
    double dist = this->getOrigin().distance(other.getOrigin());
    return dist;
}

double Shape::distance(Shape &the_shape, Shape &other)
{
    double dist = the_shape.getOrigin().distance(the_shape.getOrigin(), other.getOrigin());
    return dist;
}

void Shape::move(double dx, double dy)
{
    double old_x = this->getOrigin().getx();
    double old_y = this->getOrigin().gety();

    origin.sety(old_x + dx);
    origin.sety(old_y + dy);
}
