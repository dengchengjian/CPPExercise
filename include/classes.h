#include <iostream>
#include <cmath>

using namespace std;

class MyClass {
    public:
        MyClass() {
            cout << "Constructor function!" << endl;
        }
        int x_public;
        ~MyClass(){
        }

    private:
        int y_private;
    
};

class Car {
  public:
    string brand;
    string model;
    int year;
    Car(string x, string y, int z); 
    ~Car(); 
    void info(){
        cout << brand << " " << model << " " << year << endl;
    }
};

// By default, all members of a class are private if you don't 
// specify an access specifier:
class MyClass1{
    int x; // private member
    int y; // private member
};

// but you can use public "get" and "set" methods to access
// pivate attribute
class Employee{
    private:
        double salary;

    public:
        void setSalary(double s){
            salary = s;
        }
        double getSalary(){
            return salary;
        }
};

// Inheritance
class Employer: public Employee{
    
    public:
        Employer(){
            cout << "Inherit successfully!" << endl;
        }
        ~Employer(){
            cout << "delete Employer object!" << endl;
        };
};
// Multilevel inheritence
class Student: public Employer{
};

// Multiple inheritence
class MyClassCar: public MyClass, public Car{
    public:
        MyClassCar(string x, string y, int z): Car(x, y, z) {
        };
};

// Polymorphism
// Base class
class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound \n";
    }
};
// Derived class
class Pig : public Animal {
  public:
    // override the method
    void animalSound() {
      cout << "The pig says: wee wee \n";
    }
};
// Derived class
class Dog : public Animal {
  public:
    // override the method
    void animalSound() {
      cout << "The dog says: bow wow \n";
    }
};

/// @brief 20230310
/// @return 
int carClassTest();