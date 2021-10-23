#include<iostream>
#ifndef POINT_H
#define POINT_H

using namespace std;

class Point {

   public:

          Point(double x, double y );

          static int Counter() ;

          void setX(double x);

          void setY(double y);

          double getDiff(double x,double y);

          static double Diff(double x,double y);

          double getXcord();

          double getYcord();

          static int getId();

          void Display();

 private :

    double xCord,yCord;
    static int counter,id;

};

#endif
