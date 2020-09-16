#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "employee.h"

using namespace std;

// EMPLOYEE FUNCTIONS
void Employee ::setFirstname(string first)
{
    firstname = first;
}

void Employee ::setLastname(string last)
{
    lastname = last;
}

void Employee ::setID(int id)
{
    ID = id;
}

string Employee::getFirstname() const
{
    return firstname;
}

string Employee::getLastname() const
{
    return lastname;
}

int Employee::getID() const
{
    return ID;
}

int checklink()
{
    cout << "works";
}

void read_rec()
{
    Employee e;
    int id;
    string fn, ln;
    cout << "Enter details of the employee: " << endl;
    cout << "Enter firstname: " << endl;
    cin >> fn;
    cout << "Enter lastname: " << endl;
    cin >> ln;
    cout << "Enter ID: " << endl;
    cin >> id;
    e.setFirstname(fn);
    e.setLastname(ln);
    e.setID(id);

    cout << "Your Details" << endl;
    cout << "Firstname: " << e.getFirstname();
    cout << "Latstame: " << e.getLastname();
    cout << "ID: " << e.getLastname();
}
int read_specified()
{
    cout << "Enter  number of records to be read" << endl;
    int n;
    cin >> n;
}

// int main()
// {
//     // THIS CPP FILE WILL BE USED TO :
//     // IMPLEMENT THE EMPLOYEE FUNCTIONS
//     // MORE FUNCTIONS WILL ADDED WHICH WILL BE USED BY MAIN.CPP

//     return 0;
// }