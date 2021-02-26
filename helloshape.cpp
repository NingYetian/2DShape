#include <iostream>
//#include "shape.h"
using namespace std;

class Shape{
    public:
    int cx;
    int cy;

    int getlength(){
        return max(width, height);
    }

    protected: 
    int length;
    int width;
    int height;
};


class Rectangle : public Shape{
    
    private:
    int width;
    int height;
    int cx;
    int cy;
    public:
    //constructor
    Rectangle(int cx_, int cy_, int wid, int hei){
        cx = cx_; //the center of the rectangle x
        cy = cy_; //the center of the rectangle y
        width = wid;
        height = hei;
    }

    /****function to check if a point is inside of a rectangle****/
    /****return true if it's inside****/
    bool within(int x, int y){
        if((2*x > 2*cx - width && 2*x<2*cx+width) && (2*y > 2*cy - height && 2*y<2*cy+height)){
            return true;
        }
        return false;
    }
};

class Circle : public Shape{
    
    private:
    int cx;
    int cy;
    int radius;
    public:
    //constructor
    Circle(int cx_, int cy_, int r){
        cx = cx_;
        cy = cy_;
        radius = r;
    }

    /****function to check if a point is inside of a circle****/
    /****return true if it's inside****/
    bool within(int x, int y){
        int dist = (x-cx)*(x-cx) + (y-cy)*(y-cy);
        if(dist < radius*radius){
            
            return true;
        }
        return false;
    }
};


/**********Test_Case below*************/
bool TestWithin1()
{
    int x = 3; 
    int y = 3;
    Rectangle rect(0,0,4,4);
    bool exp = false;
    //Assert::AreEqual(rect.within(x,y), true);
    bool temp = (rect.within(x,y) == exp);
    return temp;
}

bool TestWithin2()
{
    //boundry
    int x = 2; 
    int y = 2;
    Rectangle rect(0,0, 4,4);
    bool exp = false;
    bool temp = (rect.within(x,y) == exp);
    return temp;
}

bool TestWithin3()
{
    int x = 7; 
    int y = 9;
    Rectangle rect(1,1, 5,5);
    bool exp = false;
    bool temp = (rect.within(x,y) == exp);
    return temp;
}

bool TestWithin4()
{
    int x = 1; 
    int y = 1;
    Circle cir(0,0,1);
    bool exp = false;
    return cir.within(x,y) == exp;
}

bool TestWithin5()
{
    int x = 1; 
    int y = 1;
    Circle cir(0,0,2);
    bool exp = true;
    return cir.within(x,y) == exp;
}

bool TestWithin6()
{
    //boundry
    int x = 3; 
    int y = 4;
    Circle cir(0,0,5);
    bool exp = false;
    return cir.within(x,y) == exp;
}


//main
int main(){
    int x, y;
    cout<<"===========Let's start with determining a point's location========="<<endl;
    cout<<"The x coordinate is: ";
    cin>>x;

    cout<<"The y coordinate is: ";
    cin>>y;

    Rectangle rect(2, 2, 4, 4);
    cout<< "Is my point within the rectangle? "<<std::boolalpha <<rect.within(x,y)<<endl;  //boundery - false
    
    Circle cir(1,1,1);
    cout<< "Is my point within the Circle? "<<std::boolalpha <<cir.within(x,y)<<endl;
    system("pause");

    cout<<"=======Secondly, check if all the test cases for both rectangle and circle classes are passed?======"<<endl;
    //check rectangle(all tests passed)
    cout<<std::boolalpha<<TestWithin1()<<endl;
    cout<<std::boolalpha<<TestWithin2()<<endl;
    cout<<std::boolalpha<<TestWithin3()<<endl;
    //check circle(all tests passed)
    cout<<std::boolalpha<<TestWithin4()<<endl;
    cout<<std::boolalpha<<TestWithin5()<<endl;
    cout<<std::boolalpha<<TestWithin6()<<endl;

    system("pause");
    cout<<"==============An example of using copy constructor=============" <<endl;
    //assuming the point is at(2, 2) given a rectangle centered at ()
    x = 2;
    y = 2;
    Rectangle r1(0, 0, 3, 3);
    Rectangle r2(r1);  //copy constructor
    cout<< "Is my point within the rectangle? "<<std::boolalpha <<r2.within(x,y)<<endl;
    return 0;
}








