#include <iostream>
#include <bits/stdc++.h>
#include <string.h>

using namespace std;

class Employee
{
private:
    int ID;
    string lastname;
    string firstname;

public:
    Employee()
    {
        }
    Employee(const Employee &person)
    {
        ID = person.ID;
        lastname = person.lastname;
        firstname = person.firstname;
    }

    Employee(int idnum, string first, string last)
    {
        ID = idnum;
        firstname = first;
        lastname = last;
    }

    // ~Employee();

    void setFirstname(string first);
    void setLastname(string last);
    void setID(int id);
    int getID() const;
    string getFirstname() const;
    string getLastname() const;

    // friend function to be done
};
