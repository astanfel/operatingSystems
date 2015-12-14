#include <iostream>
#include <string>
#include <cmath>


//  lab6_driver.cpp
//  Lab 6
//
//  Created by Anthony Stanfel  on 9/14/15.
//  Copyright (c) 2015 Anthony Stanfel . All rights reserved.
//

#include "lab6.h"

using namespace std;


int main (int argc, char * argv[]) {
    //add in a second person and average some of the data that they enter to complete lab 3.
    int numberOfPlayers;
    int *numberOfPlayersPtr = &numberOfPlayers;
    int maxNumberOfPlayers = 10;
    int *maxNumberOfPlayersPtr = &maxNumberOfPlayers;
    int player = 0;
    int *playerPtr = &player;
    char answer;
    char *answerPtr = &answer;
    string ageString;
    string *ageStringPtr = &ageString;
    string lvlString;
    string *lvlStringPtr = &lvlString;
    string fallenString;
    string *fallenStringPtr = &fallenString;
    std:: cout << "How many players do you want to make? " << endl;
    std::cin >> *numberOfPlayersPtr;
    //To comment multiple lines, cmd + / with the lines selected.
    if (*numberOfPlayersPtr > *maxNumberOfPlayersPtr) {
        std:: cout << "This is only a ten player or less game currently... " << endl;
        std:: cout << "How many players do you want to make? " << endl;
        std::cin >> *numberOfPlayersPtr;
    }
    static People person[10];
    //while (player < numberOfPlayers){
    for (int x = 0; x < numberOfPlayers; x++) {
//        People person1("Fred", "Junk", 0, 0, 0);
//        People person2("Fred","Junk", 0, 0, 0);
        string tempName;
        string *tempNamePtr = &tempName;
        string className;
        string *tempClassPtr = &className;
        int tempNumber;
        int *tempNumberPtr = &tempNumber;
        int tempKillNumber;
        int *tempKillNumberPtr = &tempKillNumber;
        int tempLvl;
        int *tempLvlPtr = &tempLvl;
        std:: cout << "Please enter your name: " << endl;
        std::cin >> *tempNamePtr;
        person[x].setMyName(*tempNamePtr);
        std:: cout<< "Thanks " + person[x].getName() + " you have passed your first test!" << endl << endl;
        std::cout << "This is where your name is stored in memory: "<< tempNamePtr << endl <<endl;
        std:: cout << "Do you want to be a Worlock, Titan, or Hunter?: " << endl;
        std:: cin >> *tempClassPtr;
        person[x].setTheClass(*tempClassPtr);
        std:: cout<< "You chose the " + person[x].getTheClass() + " class, you are now" +
        " a defender of the light" << endl << endl;
        std::cout << "This is where your class is stored in memory: "<< tempClassPtr << endl <<endl;
        std:: cout << "Please enter your age: " << endl;
        std:: cin >> *tempNumberPtr;
//        person[x].setAge(tempNumberPtr);
        person[x].setAgeFromPointer(tempNumberPtr);
        if(person[x].getAge()< 21){
            cout << " You are not old enough for this task yet Guardian." << endl;
            return 0;
        }
        else{
            std::cout << "This is where your age is stored in memory: "<< tempNumberPtr << endl <<endl;
            cout<< "You have passed the second test, please proceed Guardian." << endl << endl;
        }
        std:: cout << "How many fallen are you going to destroy?: " << endl;
        std:: cin >> *tempKillNumberPtr;
        person[x].setFallen(*tempKillNumberPtr);
        std::cout << "This is where your slayed fallen are stored in memory: "<< tempKillNumberPtr << endl <<endl;
        if (*playerPtr+ 1 > 1) {
            
            std:: cout << "On average, the Guardians are going to destory "
            << person[x].average(person, *numberOfPlayersPtr) << " Fallen" << endl;
        }
        std::cout<< "What level do you want to be?: "<< endl;
        std::cin>> *tempLvlPtr;
        if (*tempLvlPtr > 10) {
            std::cout<< "Who do you think you are?" << endl
            << "Nobody starts at that high of a level!!"<<endl;
            std::cout<< "What level do you want to be?: "<< endl;
            std::cin>> tempLvl;
        }
        else
            person[x].setLvl(tempLvl);
        cout<< "Okay lets get you to level: " << tempLvl << endl;
        for (tempLvl = 0; tempLvl < person[x].getLvl(); tempLvl++) {
            cout << "Congrats you have reached level " << *tempLvlPtr << "!" << endl;
        }
        //You cannot concationate ints with strings or the compiler will yell at you!
        cout << "Congrats you have reached level " << *tempLvlPtr << "!" << endl;
        cout<< "I can't believe that you made it to " << *tempLvlPtr << " so fast!!"<< endl <<endl;
        cout << "Would you like to reach a bonus level? (Enter y or n)" << endl << endl;
        cin >> &answer;
        if(*answerPtr == 'y'){
            person[x].setLvl(tempLvl +1);
            cout << "Congrats you have reached level " << person[x].getLvl() << "!" <<endl << endl;
        }//end if
        //cout<< person[x].whoAreYou(person, numberOfPlayers);
        if (player == (numberOfPlayers-1)) {
            cout<< "Would you like to know who the best players are? (Enter y or n)" << endl;
            cin>> &answer;
            if(*answerPtr == 'y'){
                person[x].bestPlayers(person, tempLvlPtr, tempKillNumberPtr, tempNumberPtr, numberOfPlayers, lvlStringPtr, fallenStringPtr, ageStringPtr);
            }
            cout<< "The Player who is the highest level is: " << *lvlStringPtr << " who is at level: " << *tempLvlPtr << endl;
            cout<< "The Player who will defeat the most fallen is: " << *fallenStringPtr << " with a death count of:" << *tempKillNumberPtr << endl;
            cout << "The player who is the eldest of them all is: " << *ageStringPtr << " at the ripe old age of: " << *tempNumberPtr << endl;
//            cout << "Would you like to know who is going to kill the most Fallen? (Enter y or n)" << endl;
//            cin >> &answer;
//            if (*answerPtr == 'y'){
//                cout << "The person would will defeat the most Fallen is: " <<
//                person[x].killTheFallenAvg(person, numberOfPlayers) << endl << endl;
//            }
            
            cout<< "Excellent, you have passed the final test" << endl << endl;
            person[x].whoAreYou(person, *numberOfPlayersPtr);
            if (x = 5){
                cout<< "This is my error println" << endl << endl;
            }
            cout<< "Guardian(s), you are ready to fight for the light!" << endl << endl;
        }
        player++;
        if(numberOfPlayers > 1 && player <= (numberOfPlayers-1)){
            cout << "Please enter the data for player: " << (player+1) << endl <<endl;
        }
    }//end of For loop
    //}//end of while statement.
    //9/18/15 lab 6 stuff. 
    //To see where the memory of data is stored in order to see if things change when it is
    //it is out of bounds of the array.
//    cout << numberOfPlayers;
//    cout << numberOfPlayersPtr;
//    cout << maxNumberOfPlayers;
//    cout << maxNumberOfPlayersPtr;
//    cout << player;
//    cout << playerPtr;
//    cout << ageString;
//    cout << ageStringPtr;
//    cout << lvlString;
//    cout << lvlStringPtr;
//    cout << fallenStringPtr;
//    cout << fallenString << endl;
//    person[10].setAge(-5000);
//    person[10].setFallen(-10000);
//    person[10].setMyName("Gary");
//    person[-1].setAge(-5000);
//    person[-1].setFallen(-10000);
//    person[-1].setMyName("Gary");
//    cout << numberOfPlayers;
//    cout << numberOfPlayersPtr;
//    cout << maxNumberOfPlayers;
//    cout << maxNumberOfPlayersPtr;
//    cout << player;
//    cout << playerPtr;
//    cout << ageString;
//    cout << ageStringPtr;
//    cout << lvlString;
//    cout << lvlStringPtr;
//    cout << fallenStringPtr;
//    cout << fallenString << endl;
    
    return 0;
}