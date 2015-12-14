#include <iostream>
//  main.cpp
//  Lab 3
//
//  Created by Anthony Stanfel  on 8/31/15.
//  Copyright (c) 2015 Anthony Stanfel . All rights reserved.
//
#include "lab3.h"
#include <cmath>

/*int main(int argc, const char * argv[]) {
  // insert code here...
  std::cout << "Hello, World!\n";
  return 0;
  }*/
People::People(string sentName, int ageRecieved, int fallenRecieved, int LvlRecieved, int numberOfPlayersRecieved){
    theName = sentName;
    age = ageRecieved;
    fallen = fallenRecieved;
    Lvl = LvlRecieved;
    numberOfPlayers = numberOfPlayersRecieved;
}
void People::setName(string myName){
    theName = myName;
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
int People::getNumOfPlayers(){
    numberOfPlayers = numOfPlayers;
    return numberOfPlayers;
}
void People::setNumOfPlayers(int numOfPlayersIn){
    numberOfPlayers = numOfPlayersIn;
}
double People::getAvgFallenDestroyed(){
    avg = getFallen() / numberOfPlayers;
    return avg;
}
