#include <iostream>
#include <assert.h>
#include <cassert>
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
    Rectangle(float cx_, float cy_, float wid, float hei){
        cx = cx_; //the center of the rectangle x
        cy = cy_; //the center of the rectangle y
        width = wid;
        height = hei;
    }

    //copy constructor
    Rectangle(const Rectangle & obj){
        //cout<<"Copy constructor invoked" <<endl;
        cx = obj.cx;
        cy = obj.cy; 
        width = obj.width;
        height = obj.height;
    }

    //assignemnt operator
    Rectangle & operator = (const Rectangle & obj){
        //cout<<"Assignment oprator invoked" <<endl;
        cx = obj.cx;
        cy = obj.cy; 
        width = obj.width;
        height = obj.height;
    }

    /****function to check if a point is inside of a rectangle****/
    /****return true if it's inside****/

    bool within(float x, float y, Rectangle r){
        if((2*x >= 2*r.cx - r.width && 2*x<=2*r.cx+width) && (2*y >= 2*r.cy - r.height && 2*y<=2*r.cy+r.height)){
            return true;
        }
        return false;
    }

    // check if anypoint the points in r2 is within recgtangle r1
    bool intersect(Rectangle r1, Rectangle r2){
        float x_start = r2.cx - r2.width/2;
        float y_start = r2.cy - r2.height/2;

        for(float i = x_start; i<r2.cx + r2.width/2; i += 0.1){
            for(float j= y_start; j<r2.cy+r2.height/2; j += 0.1){
                if(r1.within(i,j,r1)){
                    return true;
                }
            }
        }
        return false;
    }
};


int main(){
     float x, y;
    cout<<"===========Let's start with determining a point's location========="<<endl;
    cout<<"The x coordinate is: ";
    cin>>x;

    cout<<"The y coordinate is: ";
    cin>>y;

    Rectangle r0(2.0, 2.0, 4.0, 4.0);
    
    cout<< "Is my point within the rectangle r0(2.0, 2.0, 4.0, 4.0)?  "<<std::boolalpha <<r0.within(x,y,r0)<<endl; 
    
    /***********Test_Cases************/
    cout<<"=======Secondly, Let's check if sample tests are passed?======"<<endl;
    system("pause");
    Rectangle r1(2.0, 1.0, 4.0, 4.0);
    assert(r1.within(2.1, 2.1, r1) > 0);

    Rectangle r3(0.0, 0.0, 1.0, 1.0);
    assert(r3.within(2.1, 2.1, r3) == 0);
   
    Rectangle r4(r3);
    assert(r4.within(1.0, 1.0, r4) == 0);

    Rectangle r5 = (r3);
    assert(r5.within(1.1, 1.0, r5) == 0);
    
    Rectangle r6(-2.0, -1.0, 2.0, 3.0);
    assert(r1.intersect(r1, r3) > 0);
    assert(r3.intersect(r4, r3) > 0);
    assert(r6.intersect(r6, r5) == 0);
    
    cout<<"ALL TESTS PASSED!"<<endl;

    return 0;
}








