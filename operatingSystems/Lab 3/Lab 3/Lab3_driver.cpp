#include <iostream>
#include <cmath>


//  lab3_driver.cpp
//  Lab 3
//
//  Created by Anthony Stanfel  on 8/31/15.
//  Copyright (c) 2015 Anthony Stanfel . All rights reserved.
//

#include "lab3.h"

using namespace std;


int main (int argc, char * argv[]) {
    //add in a second person and average some of the data that they enter to complete lab 3.
    int numberOfPlayers;
    int player = 0;
    std:: cout << "How many players do you want to make? " << endl;
    std::cin >> numberOfPlayers;
    if (numberOfPlayers > 2) {
        std:: cout << "This is only a two play game currently... " << endl;
        std:: cout << "How many players do you want to make? " << endl;
        std::cin >> numberOfPlayers;
    }
    People person[10];
    //while (player < numberOfPlayers){
    for (int x = 0; x < numberOfPlayers; x++) {
        People person1("Fred", 0, 0, 0, 0);
        People person2("Fred", 0, 0, 0, 0);
        string tempName;
        int tempNumber;
        int tempLvl;
        std:: cout << "Please enter your name: " << endl;
        std::cin >> tempName;
        person[x].setName(tempName);
        std:: cout<< "Thanks " + person[x].getName() + " you have passed your first test!" << endl << endl;
        std:: cout << "Do you want to be a Worlock, Titan, or Hunter?: " << endl;
        std:: cin >> tempName;
        person[x].setName(tempName);
        std:: cout<< "You chose the " + person[x].getName() + " class, you are now" +
        " a defender of the light" << endl << endl;
        std:: cout << "Please enter your age: " << endl;
        std:: cin >> tempNumber;
        person[x].setAge(tempNumber);
        if(person[x].getAge()< 21){
            cout << " You are not old enough for this task yet Guardian." << endl;
            return 0;
        }
        else{
            cout<< "You have passed the second test, please proceed Guardian." << endl << endl;
        }
        std:: cout << "How many fallen are you going to destroy?: " << endl;
        std:: cin >> tempNumber;
        person[x].setFallen(tempNumber);
        if (player + 1 > 1) {
            double avg = (person[x-1].getFallen() + person[x].getFallen()) / numberOfPlayers;
            //std:: cout << "On average, the Guardians are going to destory"
            //<< person1.getAvgFallenDestroyed() << endl;
            std:: cout << "On average, the Guardians are going to destory "
            << avg << " Fallen" << endl;
        }
        std::cout<< "What level do you want to be?: "<< endl;
        std::cin>> tempLvl;
        if (tempLvl > 10) {
            std::cout<< "Who do you think you are?" << endl
            << "Nobody starts at that high of a level!!"<<endl;
            std::cout<< "What level do you want to be?: "<< endl;
            std::cin>> tempLvl;
        }
        else
            person[x].setLvl(tempLvl);
        cout<< "Okay lets get you to level: " << tempLvl << endl;
        for (tempLvl = 0; tempLvl < person[x].getLvl(); tempLvl++) {
            cout << "Congrats you have reached level " << tempLvl << "!" << endl;
        }
        //You cannot concationate ints with strings or the compiler will yell at you!
        cout << "Congrats you have reached level " << tempLvl << "!" << endl;
        cout<< "I can't believe that you made it to " << tempLvl << " so fast!!"<< endl;
        cout<< "Excellent, you have passed the final test" << endl << endl;
        cout<< "Guardian, you are ready to fight for the light!" << endl << endl;
        player++;
    }//end of For loop
    //}//end of while statement.
    return 0;
}
