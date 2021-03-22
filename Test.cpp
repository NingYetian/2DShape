#include <iostream>
#include "helloshape.h"
#include <iostream>
//#include <stdio.h>
#include <assert.h>
#include <cassert>

using namespace std;

class TestA : Rectangle{
    
public:
    void test_within(void){
    
    // Rectangle r1(2.0, 1.0, 4.0, 4.0);
    // assert(r1.within(2.1, 2.1, r1) > 0);

    // Rectangle r3(0.0, 0.0, 1.0, 1.0);
    // assert(r3.within(2.1, 2.1, r3) == 0);
   
    // Rectangle r4(r3);
    // assert(r4.within(1.0, 1.0, r4) == 0);

    // Rectangle r5 = (r3);
    // assert(r5.within(1.1, 1.0, r5) == 0);
    
    // Rectangle r6(-2.0, -1.0, 2.0, 3.0);
    // assert(r1.intersect(r1, r3) > 0);
    // assert(r3.intersect(r4, r3) > 0);
    // assert(r6.intersect(r6, r5) == 0);
    }
};
