#include <iostream>
using namespace std;

class Point2D{
    public:
    float cx;
    float cy;

    protected: 
    int length;
    int width;
    int height;
};


class Rectangle : public Point2D{
    
    private:
    float width;
    float height;
    float cx;
    float cy;
    public:
    //constructor
    Rectangle(float cx_, float cy_, float wid, float hei){
        
    }

    //copy constructor
    Rectangle(const Rectangle & obj){
       
    }

     //assignemnt operator
    Rectangle & operator = (const Rectangle & obj){
       
    }

    /****function to check if a point is inside of a rectangle****/
    /****return true if it's inside****/
    // bool within(float x, float y){
    //     if((2*x > 2*cx - width && 2*x<2*cx+width) && (2*y > 2*cy - height && 2*y<2*cy+height)){
    //         return true;
    //     }
    //     return false;
    // }

     bool within(float x, float y, Rectangle r){
       
    }

    // check if all the points in r2 is within recgtangle r1
    bool intersect(Rectangle r1, Rectangle r2){
    }
};