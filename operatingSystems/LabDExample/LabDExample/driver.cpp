
//
//  driver.cpp
//  Lab_J
//
//  Created by Anthony Stanfel  on 11/4/15.
//  Copyright © 2015 Anthony Stanfel . All rights reserved.
//
//
//  driver.cpp
//  Lab G
//
//  Created by Anthony Stanfel  on 10/23/15.
//  Copyright © 2015 Anthony Stanfel . All rights reserved.
//
//
#include <iostream>
#include <string>
//#include <cmath>
#include <fstream>  // contains file stream processing>
#include <cstdlib>  // contains EXIT_FAILURE & EXIT_SUCCESS
#include <stdexcept> // exceptions
//#include <iomanip>
#include "LabJ.h"
#include "LabJSub.h"

using namespace std;


int main (int argc, char ** argv) {
        //add in a second person and average some of the data that they enter to complete lab 3.
        int numberOfPlayers;
        int *numberOfPlayersPtr = &numberOfPlayers;
        int maxNumberOfPlayers = 10;
        int *maxNumberOfPlayersPtr = &maxNumberOfPlayers;
        int player = 0;
        int *playerPtr = &player;
        char answer;
        char *answerPtr = &answer;
        char **listPtr;
        //char *letterPtr;
        string ageString;
        string *ageStringPtr = &ageString;
        string lvlString;
        string *lvlStringPtr = &lvlString;
        string fallenString;
        string *fallenStringPtr = &fallenString;
        string instructions;
        string userFileName = "instructions.txt";
        People guardianPtr;
        // you have to throw in an arguement when you run in terminal.
        //This is Lab 7 adv.
        //set this equal to the arguments that are passed in.
        listPtr=argv;
        //increment the listPtr to avoid printing out the file location. Its not important...
        listPtr++;
        while (*listPtr){
                //if it is a -file, don't do anything.
                //        ifstream myIncomingFile ("instructions.txt", ios::in);
                //        if (myIncomingFile.is_open()) {
                //            cout << "Made it here" << endl;
                //            while(getline(myIncomingFile, instructions)) {
                //                std::cout << instructions << endl;
                //            }//end while
                //            myIncomingFile.close();
                //        }//end if
                //
                //        // exit if file not exist
                //        else if ( !myIncomingFile) {
                //            cerr << "Could not open file " << instructions << endl;
                //            exit (EXIT_FAILURE);
                //        } // end if
                //
                if (strcmp(*listPtr, "-file") == 0) {
                        //*listPtr++;
                        //cout <<<< listPtr <<endl;
                        //        std::cout <<"We opened " << *listPtr << "\n";
                        //        std::cout <<"version 2.0"<< endl;
                    }//endIf
                //if it is not a file, print it
                else{
                        std::cout <<"We opened " << *listPtr << "\n";
                        //std::cout <<"version 3.0"<< endl;
                        //listPtr++;
                    }//endElse
                //increment to test the next one.
                
                listPtr++;
            }
        //This tries to use memory that you don't have allocated for you program.
        //argv[-987654321][0] = 5;
        //This tries to change something outside of the context of the argv array. This would be very
        //dangerous becuase you could hurt the OS badly by writing over things that you don't know are there.
        //Luckily, the OS protected itself with a Segmentation fault: 11 error message and ended the program.
        //    Last login: Wed Oct  7 13:21:25 on ttys002
        //    Anthonys-MacBook-Pro:~ anthony$ /Users/anthony/Library/Developer/Xcode/DerivedData/Lab7advPtr-aiqeqhediyoxisedsydrmquetynz/Build/Products/Debug/Lab7advPtr -file test -file test1 -file test2 ; exit;
        //    We opened test
        //    We opened test1
        //    We opened test2
        //    Segmentation fault: 11
        //    logout
        //    Saving session...
        //    ...copying shared history...
        //    ...saving history...truncating history files...
        //    ...completed.
        //
        //    [Process completed]
        //This is the end of Lab 7 adv.
        // This is the start of lab G or lab 8, choose your flavor
        // It will read from a text file when you run the program in xCode, not from terminal.
        ifstream myIncomingFile ("/Users/anthony/Documents/xCode/operatingSystems/operatingSystems/Lab\ G/Lab\ G/instructions.txt", ios::in);
        //    ifstream myIncomingFile ("instructions.txt", ios::in);
        if (myIncomingFile.is_open()) {
                //cout << "Made it here" << endl;
                while(getline(myIncomingFile, instructions)) {
                        std::cout << instructions << endl;
                    }//end while
                myIncomingFile.close();
            }//end if
        
        // exit if file not exist
        else if ( !myIncomingFile) {
                cerr << "Could not open file " << instructions << endl;
                exit (EXIT_FAILURE);
            } // end if
        
        static TakenKingPlayer person[10];
        std:: cout << endl << "How many players do you want to make? " << endl;
        std::cin >> *numberOfPlayersPtr;
        People *guardainPtr = new People[numberOfPlayers]();
        
        //To comment multiple lines, cmd + / with the lines selected.
        if (*numberOfPlayersPtr > *maxNumberOfPlayersPtr) {
                std:: cout << "This is only a ten player or less game currently... " << endl;
                std:: cout << "How many players do you want to make? " << endl;
                std::cin >> *numberOfPlayersPtr;
            }
        delete []guardainPtr;// I don't actually want them tho make a ton of players. So give the memory back
        //while (player < numberOfPlayers){
        for (int x = 0; x < numberOfPlayers; x++) {
                //        People person1("Fred", "Junk", 0, 0, 0);
                //        People person2("Fred","Junk", 0, 0, 0);
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
                int YearsPlayed;
                string gamerTag;
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
                //        person[x].setAge(tempNumberPtr);
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
                //I have a try/ catch where I throw to make sure that they are not dividing by zero.
                if (player == (numberOfPlayers-1)) {
                        cout<< "Would you like to know on average how many fallen the guardians will kill? \n(Enter y or n)" << endl;
                        cin>> &answer;
                        if(*answerPtr == 'y' || *answerPtr == 'Y'){
                                try {
                                        if (person[x].average(person, *numberOfPlayersPtr) != 0) {
                                                std:: cout << "On average, the Guardians are going to destory "
                                                << person[x].average(person, *numberOfPlayersPtr) << " Fallen" << endl;\
                                            }//end if
                                    }//end try
                                catch (std::out_of_range &e) {
                                        std::cout << "Caught an out_of_range exception: "  << e.what () << endl << endl;
                                    }//catch 1
                                catch (std::exception &e) {
                                        std::cout << "Caught an exception of an unexpected type: " << e.what () << endl << endl;
                                    }//catch 2
                                catch (...) {
                                        std::cout << "Caught an unknown exception" << endl << endl;
                                    }//catch 3
                            }//end inner if
                    }//end outter if
                
                //This is where I did a divide by zero, you have to have guardians to do an average, so I had to
                //make this up.
                std::cout << endl << " If there were no guardians, you would have seen this: " << endl;
                try {
                        int X = 0;
                        int Y = 0;
                        if ( X == Y ){
                                throw ("Divide by zero");
                            } else {
                                    cout << X/Y << endl;
                                }
                    } catch (std::out_of_range &e) {
                            std::cout << "Caught an out_of_range exception: "  << e.what () << endl << endl;
                        } catch (std::exception &e) {
                                std::cout << "Caught an exception of an unexpected type: " << e.what () << endl << endl;
                            } catch (...) {
                                    std::cout << "Caught an unknown exception (You probably tried to devide by zero...)" << endl << endl;
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
        //This is the start of lab J in the driver.
                std:cout << "Are you a Taken King player? (Enter Y or N)" << endl;
                cin>> &answer;
                if(*answerPtr == 'y' || *answerPtr == 'Y'){
                        cout << "Sweet! Taken King Players are awesome!, I have a couple more questions for you!" << endl;
                        std:: cout << "Do you want to be a SunBreaker, StormCaller, or NightStalker?: " << endl;
                        std:: cin >> className;
                        person[x].setNewClass(className);
                        person[x].setTheClass(className);
                        cout<< "You chose the " + person[x].getNewClass() + " class, you are now" +
                        " a defender of the traveler from Oryx" << endl << endl;
                        cout << "How many years have you been playing Destiny?" << endl;
                        cin >> YearsPlayed;
                        person[x].setYearsPlayed(YearsPlayed);
                        cout << "Wow I can't believe that you have played for " + to_string(person[x].getYearsPlayed()) + " year(s)!"<< endl;
                        cout << "I need to play you online, what is your gamertag?: " << endl;
                        cin >> gamerTag;
                        person[x].setGamerTag(gamerTag);
                        cout << " I will make sure to look for " + person[x].getGamerTag() + " the next time that I hop onto my Playstation!" << endl << endl;
                    }//end if for lab J (Taken King)
                
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
                        //            cout << "Would you like to know who is going to kill the most Fallen? (Enter y or n)" << endl;
                        //            cin >> &answer;
                        //            if (*answerPtr == 'y'){
                        //                cout << "The person would will defeat the most Fallen is: " <<
                        //                person[x].killTheFallenAvg(person, numberOfPlayers) << endl << endl;
                        //            }
                        
                        cout<< "Excellent, you have passed the final test" << endl << endl;
                        person[x].whoAreYou(person, *numberOfPlayersPtr);
                        //This is out of bounds with a string. There is no protection for array out of bounds in
                        //C++, according to what I have read....
                        try {
                                cout << "I will try to a letter to your file name: " << instructions << endl;
                                instructions.replace (150, 1, 1, 'G');
                                cout << "I changed the file to be: " << instructions << endl;
                            } catch (std::out_of_range &e) {
                                    std::cout << "That's waaaay out of bounds man!"  << e.what () << endl << endl;
                                } catch (std::exception &e) {
                                        std::cout << "Caught an exception of an unexpected type: " << e.what () << endl << endl;
                                    } catch (...) {
                                            std::cout << "Caught an unknown exception\n\n";
                                        }
                        
                        //            Here is where I throw an out of bounds.
                        //            try {
                        //                cout << "I will give a name to the 100th guardain to the list: " << endl;
                        //                person[100].setMyName("Tony");
                        //                throw ("Out of Bounds");
                        //                cout << "I changed the file to be: " << person[100].getName() << endl;
                        //            } catch (std::out_of_range &e) {
                        //                std::cout << "Caught an out_of_range exception: "  << e.what () << endl << endl;
                        //            } catch (std::exception &e) {
                        //                std::cout << "Caught an exception of an unexpected type: " << e.what () << endl << endl;
                        //            } catch (...) {
                        //                std::cout << "Caught an unknown exception\n\n";
                        //            }
                        
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
        //    cout << numberOfPlayers;
        //    cout << numberOfPlayersPtr;
        //    cout << maxNumberOfPlayers;
        //    cout << maxNumberOfPlayersPtr;
        //    cout << player;
        //    cout << playerPtr;
        //    cout << ageString;
        //    cout << ageStringPtr;
        //    cout << lvlString;
        //    cout << lvlStringPtr;
        //    cout << fallenStringPtr;
        //    cout << fallenString << endl;
        //    person[10].setAge(-5000);
        //    person[10].setFallen(-10000);
        //    person[10].setMyName("Gary");
        //    person[-1].setAge(-5000);
        //    person[-1].setFallen(-10000);
        //    person[-1].setMyName("Gary");
        //    cout << numberOfPlayers;
        //    cout << numberOfPlayersPtr;
        //    cout << maxNumberOfPlayers;
        //    cout << maxNumberOfPlayersPtr;
        //    cout << player;
        //    cout << playerPtr;
        //    cout << ageString;
        //    cout << ageStringPtr;
        //    cout << lvlString;
        //    cout << lvlStringPtr;
        //    cout << fallenStringPtr;
        //    cout << fallenString << endl;
        
        return EXIT_SUCCESS;
}
