#include <iostream>
#include "Point.h"
using namespace std;


void Point :: setX(int x) {
		   	  xCord = x;
}

void Point :: setY(int y) {
              yCord = y;
}

void Point :: setID(){
                id++;
}

int Point :: getXcord(){

                return xCord;

}

int Point :: getYcord(){

                 return yCord;
}
int Point :: getId(){

                 return id;
}
void Point :: Display(){

             cout << "ID is : "<<id<<endl;
             cout << "X Coordinate is : "<< xCord<<endl;
             cout << "Y Coordinate is : "<<yCord<<endl;
}
