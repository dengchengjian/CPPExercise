#include <iostream>
#include <string>

#include "classes.h"

using namespace std;


// define member functions
Car::Car(string x, string y, int z){
    cout << "an object is constructed and initialized." << endl;
    brand = x;
    model = y;
    year = z;
} // define the constructor with parameters

Car::~Car(){
    cout << "Object is deleted!" << endl;
}

int carClassTest(){

    Car carobj1("BMW", "X5", 1999);
    Car carobj2("Ford", "Mustang", 1969);
    carobj1.info();
    carobj2.info();

    MyClass myobj;
    myobj.x_public = 25; // public menbers are allowed to access
    // myobj.y_private = 50; // private menbers are not allowed to access

    Employee myobj1;
    myobj1.setSalary(50000.005);
    cout.precision(10);
    cout << myobj1.getSalary() << endl;

    // inheritence
    Employer myobj2;
    myobj2.setSalary(10000.555);
    cout << myobj2.getSalary() << endl;
    // multilevel inheritence
    Student myobj3;
    // multiple inheritence
    MyClassCar myobj4("tt", "yy", 22);
    myobj4.info();

    // Polymorphism
    Animal myanimal;
    myanimal.animalSound();
    Pig mypig;
    mypig.animalSound();
    Dog mydog;
    mydog.animalSound();

    return 0;
}