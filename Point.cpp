#include <iostream>
#include "Point.h"
using namespace std;

int Point::counter{ 1 };
int Point::id{ 1001 };

 Point :: Point(double x, double y ){
                xCord = x;
                yCord = y;
       }

 int Point :: Counter() {
             return counter++;
        }

 void Point :: setX(double x) {
         xCord = x;
      }

void Point :: setY(double y) {
         yCord = y;
      }

double Point :: getDiff(double x,double y){

                return x - y;
       }

double  Point :: Diff(double x,double y){
                return x - y;
       }

double Point :: getXcord()
        {
            return xCord;
        }

double Point :: getYcord()
        {
            return yCord;
        }

int Point :: getId()
        {
            return id++;
        }

void Point :: Display(){
             cout <<endl;
             cout << "ID is : "<<getId()<<endl;
             cout<< "Object no. is : "<<Counter()<<endl;
             cout << "X Coordinate is : "<< getXcord()<<endl;
             cout << "Y Coordinate is : "<<getYcord()<<endl;
             cout<< "Difference is : "<<getDiff(getXcord(),getYcord())<<endl;
             cout<< "Static Difference is : "<<Diff(getXcord(),getYcord())<<endl;

}
