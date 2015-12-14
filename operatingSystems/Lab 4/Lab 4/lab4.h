#include <iostream>
//  lab4.h
//  Lab 4
//
//  Created by Anthony Stanfel  on 9/2/15.
//  Copyright (c) 2015 Anthony Stanfel . All rights reserved.
//

#ifndef Lab_4_lab4_h
#define Lab_4_lab4_h

using namespace std;

class People {
public:
    //int numOfPlayers;
    //int getNumOfPlayers();
    //double getAvgFallenDestroyed();
    //void setNumOfPlayers(int numOfPlayersIn);
    string whoAreYou(People person[], int temp);
    People(string sentName = "Junk", string sentTheClass = "Junk", int age = 0 , int y = 0, int lvl = 0);
    int getAge();
    int getFallen();
    void setAge(int ageIn);
    void setFallen(int fallenIn);
    int getLvl();
    void setLvl(int);
    //string name;
    string getName();
    string getTheClass();
    void setName(string);
    void setMyName(string);
    void setTheClass(string);
    int lvlUp;
    static int maxLvl;
private:
    string theClass;
    int age;
    int fallen;
    string theName;
    int Lvl;
    //int numberOfPlayers;
    int sum;
    int avg;
    int size = 10;
};
#endif
