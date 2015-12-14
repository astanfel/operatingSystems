//
//  LabJ.h
//  Lab_J
//
//  Created by Anthony Stanfel  on 11/4/15.
//  Copyright © 2015 Anthony Stanfel . All rights reserved.
//


#include <iostream>
#ifndef Lab_J_labJ_h
#define Lab_J_labJ_h

using namespace std;

class People {
public:
        //int numOfPlayers;
        //int getNumOfPlayers();
        //double getAvgFallenDestroyed();
        //void setNumOfPlayers(int numOfPlayersIn);
        string whoAreYou(People person[], int temp);
        People(string sentName = "Junk", string sentTheClass = "Junk", int age = 0 , int y = 0, int lvl = 0);
        ~People();//destructor
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
        int average(People person[], int temp);
        void setAgeFromPointer(int *agePointer);
        string killTheFallenAvg(People person[], int temp);
        string bestPlayers(People person[], int *templvlPtr, int *tempfallenKilledPtr,int *tempNumberPtr, int numberOfPlayers, string *lvlStringPtr, string *fallenStringPtr, string *ageStringPtr);
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
