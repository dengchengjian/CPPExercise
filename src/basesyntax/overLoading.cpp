#include <iostream>

/*
Instead of defining two functions that should do the same thing, it is better to overload one.
*/

using namespace std;

int plusFunc(int x, int y){
    return x + y;
}

double plusFunc(double x, double y){
    return x + y;
}


void overLoadingTest(){
    int x = 10, y = 15;
    double a = 10.001, b = -35.0111;
    cout << "int: " << plusFunc(x, y) << endl;
    cout << "double: " << plusFunc(a, b) << endl;
}