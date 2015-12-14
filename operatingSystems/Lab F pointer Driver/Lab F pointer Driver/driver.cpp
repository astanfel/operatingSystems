//
//  driver.cpp
//  Lab F pointer Driver
//
//  Created by Anthony Stanfel  on 9/28/15.
//  Copyright © 2015 Anthony Stanfel . All rights reserved.
//

#include <stdio.h>
#include "point.h"
#include <iostream>

// I have to have a forward declaration to help the compiler know that these functions are coming later in the code
void fixOrder(int x, int y);
void fixOrder(int * ptX, int * ptY);

using namespace std;

// testing pointers
int main (int argc, char * argv[]) {
    // if I call the function named addThese() and pass in 2 numbers, I pass by value (i.e. I pass a copy)
    int x = 2;
    int y = 1;
    cout << "Before the function, x = " << x << " and y = " << y << endl;
    fixOrder(x,y);
    cout << "After the function, unchanged x = " << x << " and y = " << y << " because I passed by value (a copy)" << endl << endl << endl;
    
    // if I call the function named addTheseByPointer() and pass in the pointers (the ADDRESS), I pass by reference (i.e. I pass a pointer to the original int)
    cout << "Before the function, x = " << x << " and y = " << y << endl;
    fixOrder( &x, &y);  // gets a copy of the address (which is a pointer)
    cout << "After the function, x values are " << x << " and y is " << y
    << " because I passed by reference (i.e. passed the address or pointer) (so I can change the original numbers)" << endl;
    
    return 0;
}

void fixOrder(int x, int y){
    if (x > y){  // switch them
        int temp = y;
        y = x;
        x = temp;
    }
    cout << "Inside the function, x = " << x << " and y = " << y << endl;
    return;
}

void fixOrder(int * ptX, int * ptY){
    if (*ptX > *ptY){  // switch them
        int temp = * ptY;
        *ptY = *ptX;
        *ptX = temp;
    }
    cout << "Inside the function, x = " << *ptX << " and y = " << *ptY << endl;
    cout << "The address of x is " << ptX << " and the address of y is " << ptY << endl;
    return;
}
