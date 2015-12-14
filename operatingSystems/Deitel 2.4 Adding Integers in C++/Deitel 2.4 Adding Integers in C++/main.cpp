//
//  main.cpp
//  Deitel 2.4 Adding Integers in C++
//
//  Created by Anthony Stanfel  on 8/26/15.
//  Copyright (c) 2015 Anthony Stanfel . All rights reserved.
//  This is an example out of the seventh edition of C++ how to program
//  by Paul and Harvey Deitel isbn #: 978-0-13-216541-9

#include <iostream>
//  This is an addition program that displays the sum of two integers

//  start of the main function
int main() {
    
//  Delcaring some varibles
    int number1;
    int number2;
    int sum;
    
    std::cout << "Enter the first integer number: "; // ask the user to enter an number
    std::cin >> number1;// set the number to the varible
    
    std::cout << "Enter the second integer number: ";// ask the user to enter another number
    std::cin >> number2;// set the number to the varible
    
    sum = number1 + number2;// add the numbers together and store it in the sum varible
    
    std:: cout << "The sum of the two numbers is: " << sum << std::endl;// display the sum, and end the line
    
}// end of the main function

//  Deitel, Paul J., Harvey M. Deitel, and Harvey M. Deitel. C How to Program: Late Objects Version.
//  Upper Saddle River, NJ: Pearson Education, 2011. Print.