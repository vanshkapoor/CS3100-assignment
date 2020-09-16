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

    ~Employee()
    {
        cout << "Object is being deleted" << endl;
    }

    void setFirstname(string first);
    void setLastname(string last);
    void setID(int id);
    int getID() const;
    string getFirstname() const;
    string getLastname() const;
    bool operator == (const Employee& p1, const Employee &p2);
    bool operator < (const Employee& p1, const Employee &p2);


    // friend function to be done
};
