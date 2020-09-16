#include <iostream>
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

int main()
{

    // THIS CPP FILE WILL BE USED TO :
    // IMPLEMENT THE EMPLOYEE FUNCTIONS
    // MORE FUNCTIONS WILL ADDED WHICH WILL BE USED BY MAIN.CPP
    return 0;
}