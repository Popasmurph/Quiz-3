// Quiz3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Employee {
public:
    int employeeID;
    double salary;
};

class Manager : public Person, public Employee {
public:

    string department;

    Manager(string v, int w, int x, double y, string z) {
        name = v;
        age = w;
        employeeID = x;
        salary = y;
        department = z;
    }

    void displayDetails() {
        cout << "This manager's name is " << name << endl;
        cout << "This manager's age is " << age << endl;
        cout << "This manager's employee ID is " << employeeID << endl;
        cout << "This manager's salary is " << salary<< endl;
        cout << "This manager's department is " << department << endl;
    }
};
int main()
{
    Manager John("John", 29, 124, 51.5, "Based");
    John.displayDetails();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
