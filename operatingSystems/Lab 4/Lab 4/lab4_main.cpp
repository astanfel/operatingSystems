#include <iostream>
//  main.cpp
//  Lab 4
//
//  Created by Anthony Stanfel  on 9/2/15.
//  Copyright (c) 2015 Anthony Stanfel . All rights reserved.
//
#include "lab4.h"
#include <cmath>

/*int main(int argc, const char * argv[]) {
 // insert code here...
 std::cout << "Hello, World!\n";
 return 0;
 }*/
People::People(string sentName, string sentTheClass, int ageRecieved, int fallenRecieved, int LvlRecieved){
    theName = sentName;
    age = ageRecieved;
    fallen = fallenRecieved;
    Lvl = LvlRecieved;
    theClass = sentTheClass;
    //numberOfPlayers = numberOfPlayersRecieved;
}
void People::setMyName(string myName){
    theName = myName;
}
string People::getTheClass(){
    return theClass;
}
void People::setTheClass(string myClass){
    theClass = myClass;
}
string People::getName(){
    return theName;
}

int People::getAge(){
    return age;
}
int People::getLvl(){
    return Lvl;
}

int People::getFallen(){
    return fallen;
}
void People::setAge(int ageIn){
    age = ageIn;
    return;
}
void People::setFallen(int fallenIn){
    fallen = fallenIn;
    fallen += sum;
    return;
}
void People::setLvl(int newLevel){
    Lvl = newLevel;
}
//For lab 5, you need to sort the arrary on something, maybe have the user do it?
//Also we need to write an average method so that you can add more than two people.
// 9/8/2015. 
string People::whoAreYou(People person[], int temp){
    int x;
    string header = "JJunk";
    string whomIsThis = "junk";
    for (x = 0; x < temp; x++) {
        if(x < temp){
            header = "Here is the info on Guardian: " + to_string(x+1) + "\n";
            whomIsThis = "Name: " + person[x].getName() + "\n"+
            "Age: " + to_string(person[x].getAge()) + "\n" +
            "Fallen Slayed: " + to_string(person[x].getFallen())+ "\n" +
            "Level: " + to_string(person[x].getLvl()) + "\n";
            cout << header << endl;
            cout << whomIsThis << endl;
        }
    }
    //cout << whomIsThis << endl;
    return header + whomIsThis;
}
//int People::getNumOfPlayers(){
//    numberOfPlayers = numOfPlayers;
//    return numberOfPlayers;
//}
//void People::setNumOfPlayers(int numOfPlayersIn){
//    numberOfPlayers = numOfPlayersIn;
//}
//double People::getAvgFallenDestroyed(){
//    avg = getFallen() / numberOfPlayers;
//    return avg;
//}





