#include <iostream>
#include <bits/stdc++.h>
//#include "employee.cpp"

using namespace std;


void read+rec()
{
  Employee e;
  int id;
  string fn,ln;
  cout<<"Enter details of the employee: "<<endl;
  cout<<"Enter firstname: "<<endl;
  gets(fn);
  cout<<"Enter lastname: "<<endl;
  gets(fn);
  cout<<"Enter ID: "<<endl;
  cin>>id;
  e.setFirstname(fn);
  e.setLastname(ln);
  e.setID(id);

  cout<<"Your Details"<<endl;
  cout<<"Firstname: "<<e.getFirstname();
  cout<<"Latstame: "<<e.getLastname();
  cout<<"ID: "<<e.getLastname();

}
read_specified()
{
  cout<<"Enter  number of records to be read"<<endl;
  int n;
  cin>>n;

}

int main()
{
    // ------------------ MENU -----------------
    // (1) Read an employee record from the keyboard, and display it on the screen, and write it to the output file simultaneously.
    // (2). Read a specified number of the employee records from the input file, and display them on the screen, and write them to the output file simultaneously.
    // (3) Read two employee records from the keyboard, and test if these two employees are the same.
    // (4) Read two employee records from the keyboard, and test if one employee’s ID is less than another employee’s ID
    // (5) Quit:  close all the files, and quit.
    a:
    cout<<"------------------------------------Menu--------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"(1) Read an employee record from the keyboard, and display it on the screen, and write it to the output file simultaneously"<<endl;
    cout<<"(2).Read a specified number of the employee records from the input file, and display them on the screen, and write them to the output file simultaneously."<<endl;
    cout<<"(3) Read two employee records from the keyboard, and test if these two employees are the same."<<endl;
    cout<<"(4) Read two employee records from the keyboard, and test if one employee’s ID is less than another employee’s ID"<<endl;
    cout<<"(5) Quit:  close all the files, and quit"<<endl;
    cout<<"PLEASE ENTER YOUR CHOICE"<<endl;
    int choice c=0;
    cin>>choice;


    switch (choice) {
      case 1 : read_rec();break;
      case 2:  read_specified();break;
      case 3:  read_2_equal(); break;
      case 4:  read_2_compare();break;
      case 5:   cout<<"Exiting..."; exit(3000ms);break;
      default: cout<<"Wrong Choice";

    }


    return 0;
}
