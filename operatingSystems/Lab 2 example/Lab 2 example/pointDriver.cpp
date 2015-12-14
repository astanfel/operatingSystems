#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include "point.h"

using namespace std;


int main (int argc, char * argv[]) {
    Point pt1(2.0, 3.0);
    cout << "pt1 is (" << pt1.getX() << ", " << pt1.getY() << ")" << endl;
    cout << "and distance to origin is about " << pt1.getDistance();
    return 0;
}