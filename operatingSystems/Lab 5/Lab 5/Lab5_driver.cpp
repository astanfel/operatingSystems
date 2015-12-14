#include <iostream>
#include <cmath>


//  lab5_driver.cpp
//  Lab 5
//
//  Created by Anthony Stanfel  on 9/9/15.
//  Copyright (c) 2015 Anthony Stanfel . All rights reserved.
//

#include "lab5.h"

using namespace std;


int main (int argc, char * argv[]) {
    //add in a second person and average some of the data that they enter to complete lab 3.
    int numberOfPlayers;
    int player = 0;
    char answer;
    std:: cout << "How many players do you want to make? " << endl;
    std::cin >> numberOfPlayers;
    //To comment multiple lines, cmd + / with the lines selected.
    if (numberOfPlayers > 10) {
        std:: cout << "This is only a two play game currently... " << endl;
        std:: cout << "How many players do you want to make? " << endl;
        std::cin >> numberOfPlayers;
    }
    static People person[10];
    //while (player < numberOfPlayers){
    for (int x = 0; x < numberOfPlayers; x++) {
        People person1("Fred", "Junk", 0, 0, 0);
        People person2("Fred","Junk", 0, 0, 0);
        string tempName;
        int tempNumber;
        int tempLvl;
        std:: cout << "Please enter your name: " << endl;
        std::cin >> tempName;
        person[x].setMyName(tempName);
        std:: cout<< "Thanks " + person[x].getName() + " you have passed your first test!" << endl << endl;
        std:: cout << "Do you want to be a Worlock, Titan, or Hunter?: " << endl;
        std:: cin >> tempName;
        person[x].setTheClass(tempName);
        std:: cout<< "You chose the " + person[x].getTheClass() + " class, you are now" +
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
            
            std:: cout << "On average, the Guardians are going to destory "
            << person[x].average(person, numberOfPlayers) << " Fallen" << endl;
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
        cout<< "I can't believe that you made it to " << tempLvl << " so fast!!"<< endl <<endl;
        cout << "Would you like to reach a bonus level? (Enter y or n)" << endl;
        cin >> answer;
        if(answer == 'y'){
            person[x].setLvl(tempLvl +1);
            cout << "Congrats you have reached level " << person[x].getLvl() << "!" <<endl << endl;
        }//end if
        if(numberOfPlayers == 2 && player != numberOfPlayers-1){
            cout << "Please enter the data for the second person" << endl <<endl;
        }
        //cout<< person[x].whoAreYou(person, numberOfPlayers);
        if (player == numberOfPlayers-1) {
            cout << "Would you like to know who is going to kill the most Fallen? (Enter y or n)" << endl;
            cin >> answer;
            if (answer == 'y'){
                cout << "The person would will defeat the most Fallen is: " <<
                person[x].killTheFallenAvg(person, numberOfPlayers) << endl << endl;
            }

            cout<< "Excellent, you have passed the final test" << endl << endl;
            person[x].whoAreYou(person, numberOfPlayers);
            if (x = 5){
                cout<< "This is my error println" << endl << endl;
            }
            cout<< "Guardian(s), you are ready to fight for the light!" << endl << endl;
        }
        player++;
    }//end of For loop
    //}//end of while statement.
    return 0;
}