#include <iostream>


using namespace std;

int jugeLeapYear(){

    int year;
    cout << "input a year to juge leap year, or 0 to end!" << endl;
    cin >> year;

    while(year){

        if((year % 400) == 0){
            cout << year << " is leap year!" << endl;
            cout << "input a year to juge leap year, or 0 to end!" << endl;
            cin >> year; 
        } else if ((year % 100) == 0){
            cout << year << " is not leap year!" << endl;
            cout << "input a year to juge leap year, or 0 to end!" << endl;
            cin >> year; 
        } else if ((year % 4) == 0) {
            cout << year << " is leap year!" << endl;
            cout << "input a year to juge leap year, or 0 to end!" << endl;
            cin >> year;
        } else {
            cout << year << " is not leap year!" << endl;
            cout << "input a year to juge leap year, or 0 to end!" << endl;
            cin >> year; 
        }

    }

    return 0;
}