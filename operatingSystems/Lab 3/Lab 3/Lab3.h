#include <iostream>
//  lab3.h
//  Lab 3
//
//  Created by Anthony Stanfel  on 8/31/15.
//  Copyright (c) 2015 Anthony Stanfel . All rights reserved.
//

#ifndef Lab_3_lab3_h
#define Lab_3_lab3_h

using namespace std;

class People {
public:
    int numOfPlayers;
    int getNumOfPlayers();
    double getAvgFallenDestroyed();
    void setNumOfPlayers(int numOfPlayersIn);
    People(string sentName = "Junk", int age = 0 , int y = 0, int lvl = 0, int numberOfPlayers = 0);
    int getAge();
    int getFallen();
    void setAge(int ageIn);
    void setFallen(int fallenIn);
    int getLvl();
    void setLvl(int);
    //string name;
    string getName();
    void setName(string);
    int lvlUp;
    static int maxLvl;
private:
    int age;
    int fallen;
    string theName;
    int Lvl;
    int numberOfPlayers;
    int sum;
    int avg;
};
#endif
