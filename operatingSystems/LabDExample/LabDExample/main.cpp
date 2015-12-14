//
//  main.cpp
//  Lab_J
//
//  Created by Anthony Stanfel  on 11/4/15.
//  Copyright © 2015 Anthony Stanfel . All rights reserved.
//
#include <iostream>
#include "LabJ.h"
#include <cmath>

People::People(string sentName, string sentTheClass, int ageRecieved, int fallenRecieved, int LvlRecieved){
        theName = sentName;
        age = ageRecieved;
        fallen = fallenRecieved;
        Lvl = LvlRecieved;
        theClass = sentTheClass;
        //numberOfPlayers = numberOfPlayersRecieved;
}
People::~People(){//destructor to clear memory.
        //This is where you would want to put things that you might want to save before you destroy.
        cout << "Hey the destructor works!!!" <<endl;
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
void People::setAgeFromPointer(int *agePointer){
        age = *agePointer;
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
int People::average(People person[], int numberOfPlayers){
        int x;
        int sum = 0;
        //need a for to sum the getFallen of all of the persons, then divide the average.
        for (x = 0 ; x < numberOfPlayers; x++) {
                sum += person[x].getFallen();
            }
        double avg = sum / numberOfPlayers;
        //std:: cout << "On average, the Guardians are going to destory"
        //<< person1.getAvgFallenDestroyed() << endl;
        return avg;
}
string People::killTheFallenAvg(People person[], int numberOfPlayers){
        int x;
        int highest;
        string theWinner = person[0].getName();
        highest = person[0].getFallen();
        if (numberOfPlayers > 0) {
                
                for (x = 0; x < numberOfPlayers; x++) {
                        person[x].getFallen();
                        //        if (x == 0) {
                        //                    }//end if
                        if (person[x].getFallen() > highest) {
                                highest = person[x].getFallen();
                                theWinner = person[x].getName();
                            }//end if
                        
                    }//end for
                //Need to print the name of the person with the highest kills..
                //The name is actually at the pervious index because the array starts at 0..
                //This prints the total number of fallen that the person is going to kill.
                //theWinner = to_string(highest);
            }//end if
        else{
                theWinner = "There is no one in this array!!!";
            }
        return theWinner;
}

//For lab 6, make a fxn that passes 3 pointers for the age, fallen killed, and lvl and
//return all three to get the highest level, fallen killed and age, but the fxn
//just changes the pointers and the driver prints out the new pointer locations
//Whatever the first person is highest in stats, it prints their name, but the incorrect number,
//it prints the last index in the array for that catagory.
string People::bestPlayers(People person[], int *tempLvlPtr, int *tempKillNumberPtr,int * tempNumberPtr, int numberOfPlayers , string *lvlStringPtr, string *fallenStringPtr, string *ageStringPtr){
        //Because we have to return soemthing.
        string bestPlayer;
        //initialize some varibles to change in the loop.
        int x;
        int highestLvl = person[0].getLvl();
        int highestFallen = person[0].getFallen();
        int highestAge = person[0].getAge();
        //Initialize the stirng pointers to something so they don't return null.
        *lvlStringPtr = person[0].getName();
        *fallenStringPtr = person[0].getName();
        *ageStringPtr = person[0].getName();
        //You have to initilally set the pointer, C++ will go and
        //find the last index in the array and find a varible that matches! ANNOYING!!!! >:(
        *tempLvlPtr = highestLvl;
        *tempKillNumberPtr = highestFallen;
        *tempNumberPtr = highestAge;
        for (x=0; x <= numberOfPlayers-1; x++) {
                if (person[x].getLvl() > highestLvl) {
                        highestLvl = person[x].getLvl();
                        *tempLvlPtr = highestLvl;
                        *lvlStringPtr = person[x].getName();
                    }
                if (person[x].getFallen() > highestFallen) {
                        highestFallen = person[x].getFallen();
                        *tempKillNumberPtr = highestFallen;
                        *fallenStringPtr = person[x].getName();
                    }
                if (person[x].getAge() > highestAge) {
                        highestAge = person[x].getAge();
                        *tempNumberPtr = highestAge;
                        *ageStringPtr = person[x].getName();
                    }
                //        cout << *lvlStringPtr << *fallenStringPtr << *ageStringPtr <<endl;
                
            }
        bestPlayer = "Here are the best players in their catagories: ";
        return bestPlayer;
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
//    numberOfPlayers = numOfPlayers;
//    return numberOfPlayers;
//}
//void People::setNumOfPlayers(int numOfPlayersIn){
//    numberOfPlayers = numOfPlayersIn;
//}
//double People::getAvgFallenDestroyed(){
//    avg = getFallen() / numberOfPlayers;
//    return avg;
//}
