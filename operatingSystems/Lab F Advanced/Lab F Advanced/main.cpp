//
//  main.cpp
//  Lab F Advanced
//
//  Created by Anthony Stanfel  on 9/30/15.
//  Copyright © 2015 Anthony Stanfel . All rights reserved.
//

#include <iostream>
int main(int argc, char **argv) {
    int counter, sCount = 0, what;
    char **list;
    char *letterPointer;
    char junk;
    
    for(counter=0; counter < argc; counter++){
        std::cout <<"Command line argument " <<counter << " is " << argv[counter]<< "\n";
    }
    list=argv;
    while (*list){
        std::cout <<"Command line argument is still " << *list++ << "\n";
    }
    
    /*replace 3nd letter of 2nd command with X*/
    if (argc > 2){
        argv[2][3]='X';
        std::cout << "\nNow it is " << argv[2] << "\n";
    }
    
    /* look for an 'S' */
    list =argv;
    while (*list){
        letterPointer = *list++;
        while (*letterPointer) {
            if (*letterPointer == 'S' || *letterPointer == 's')  {
                sCount++;  }
            letterPointer++;
        }
    }
    std::cout << "There are " << sCount << " S's\n\n";
    std::cout << "Press Q to quit. \n";
    
    
    // argv[-987654321][0] = 5;
    std::cin >> junk;
    return 0;
}
/*execute from the Start Menu > ("Search Programs and Files" really is also a Run program) so type type in cmd and you get a black shell where you type something like:
 "X:\my Documents\Visual Studio 2010\Projects\myProj\Debug\myProJ.exe"
 (if your project is called myProj then this is the complete path to your myProj.exe file)
 then Run again and add other arguments:
 "X:\my Documents\Visual Studio 2010\Projects\Debug\myProJ.exe" /fHannah /safeMode /fast
 
 Homework: Commonly we open a file from the command line.
 For example:  myProg.exe –file Hannah.txt
 would run myProg.exe and open a file called Hannah.txt.
 So write a program (or change your existing one) to simply display the name of the file that you would open if the user types –file and a file name.
 Homework part 2: After it is working, add this line as 4th line from the bottom of your program: argv[-987654321][0] = 5;
 (Note the minus sign.) What happens? Leave a comment in your program.
 */
