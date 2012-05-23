//
//  main.cpp
//  ProjectEuler-ID-0001
//
//  Created by Blake Merryman on 5/12/12.
//  Copyright (c) 2012 Cinaed Designs. All rights reserved.
//
//  Description:   This software was written to solve problem 1 from
//  ProjectEuler.com. Add all the natural numbers below one thousand 
//  that are multiples of 3 or 5.
//
//  Outcome:    Deemed to produce the correct answer by the website.
//  Solution:   233,168
//

#include <iostream>

int main (int argc, const char * argv[])
{
    int sum= 0;         // Variable that contains the summation of multiples of 3 and 5.
    int n = 0;          // Variable that contains the natural number index.
    int limit = 1000;   // Variable that contains the limiting natural number.
    
    while (n < limit) {
        if ((n%3==0)||(n%5==0)) {   // Checks for multiple of 3 or 5.
            sum = sum + n;          // Adds current natural number index to sum.
            //std::cout << "Index " << n << "\n";  //Prints all valid indices.
        }
        n++;    // Increments natural number index by one.
    }
    std::cout << "\n\nThis is the sum: " << sum << ".\n\n"; // Prints the final summation.
    return 0;
}

