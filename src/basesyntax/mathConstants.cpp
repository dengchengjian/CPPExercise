/*
To include the mathematical constants, you need to use a #define macro
 called _USE_MATH_DEFINES and add it before importing the cmath library:
*/

#define _USE_MATH_DEFINES

#include <cmath>
#include <iostream>

using namespace std;

int mathConstants(){

    cout << M_PI << " " << M_E << endl;

    return 0;
}

// https://www.quantstart.com/articles/Mathematical-Constants-in-C/
