//  Lab 2
//
//  Created by Anthony Stanfel  on 8/28/15.
//  Copyright (c) 2015 Anthony Stanfel . All rights reserved.
//

#include "lab2.h"

using namespace std;


int main (int argc, char * argv[]) {
    People person1("Fred", 0, 0);
    string tempName;
    int tempNumber;
    std:: cout << "Please enter your name: " << endl;
    std::cin >> tempName;
    person1.setName(tempName);
    std:: cout<< "Thanks " + person1.getName() + " you have passed your first test!" << endl << endl;
    std:: cout << "Do you want to be a Worlock, Titan, or Hunter?: " << endl;
    std:: cin >> tempName;
    person1.setName(tempName);
    std:: cout<< "You chose the " + person1.getName() + " class, you are now" +
    " a defender of the light" << endl << endl;
    std:: cout << "Please enter your age: " << endl;
    std:: cin >> tempNumber;
    person1.setX(tempNumber);
    if(person1.getX()< 21){
        cout << " You are not old enough for this task yet Guardian." << endl;
        return 0;
    }
    else{
        cout<< "You have passed the second test, please proceed Guardian." << endl << endl;
    }
    std:: cout << "How many fallen are you going to destroy?: " << endl;
    std:: cin >> tempNumber;
    person1.setY(tempNumber);
    cout<< "Excellent, you have passed the final test" << endl << endl;
    cout<< "Guardian, you are ready to fight for the light!" << endl;
    return 0;
}
