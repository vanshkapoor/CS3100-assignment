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

void read_2_equal()
{
  Employee e[2];
  for(int  i=0;i<2;i++)

 {

   int id;
   string fn,ln;
   cout<<"Enter details of the employee "<<i+1<<": "<<endl;
   cout<<"Enter firstname: "<<endl;
   gets(fn);
   cout<<"Enter lastname: "<<endl;
   gets(fn);
   cout<<"Enter ID: "<<endl;
   cin>>id;
   e[i].setFirstname(fn);
   e[i].setLastname(ln);
   e[i].setID(id);
 }
   cout<<"";
 }

 void read_2_compare()
 {
   Employee e[2];
   for(int  i=0;i<2;i++)

  {

    int id;
    string fn,ln;
    cout<<"Enter details of the employee "<<i+1<<": "<<endl;
    cout<<"Enter firstname: "<<endl;
    gets(fn);
    cout<<"Enter lastname: "<<endl;
    gets(fn);
    cout<<"Enter ID: "<<endl;
    cin>>id;
    e[i].setFirstname(fn);
    e[i].setLastname(ln);
    e[i].setID(id);
  }
    if(e[0].getID()>e[1].getID())
    {
      cout<<"Employee "<<e[0].getFirstname<<" has greater employee ID";

    }
    else
    {
      cout<<"Employee "<<e[1].getFirstname<<" has greater employee ID";
    }
  }


 }


// int main()
// {
//     // THIS CPP FILE WILL BE USED TO :
//     // IMPLEMENT THE EMPLOYEE FUNCTIONS
//     // MORE FUNCTIONS WILL ADDED WHICH WILL BE USED BY MAIN.CPP

//     return 0;
// }
