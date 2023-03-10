#include <iostream>

#include "test.h"

using namespace std;

void swapNums(int &x, int &y){
    int z = x;
    x = y;
    y = z; 
}


void swapNumsTest(){
    int first = 10;
    int last = 100;
    cout << "first: " << first;
    cout << "\t";
    cout << "last: " << last << endl;
    swapNums( first, last); // 引用时，不需要对实参添加&符号
    cout << "after swap: " << endl;
    cout << "first: " << first;
    cout << "\t";
    cout << "last: " << last << endl;     
}