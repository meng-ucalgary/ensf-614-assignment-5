
#ifndef POINT_H
#define POINT_H

class Point {

   public:

         void setX(int xCord) ;

        void setY(int yCord) ;

        void setID();

        int getXcord();

        int getYcord();

        int getId();

        void Display();
 private :

    int xCord,yCord,id = 1001;
    int cnt ;

};

#endif
