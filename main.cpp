#include <iostream>
#include <bits/stdc++.h>
#include "employee.cpp"

using namespace std;

int main()
{
// ------------------ MENU -----------------
// (1) Read an employee record from the keyboard, and display it on the screen, and write it to the output file simultaneously.
// (2). Read a specified number of the employee records from the input file, and display them on the screen, and write them to the output file simultaneously.
// (3) Read two employee records from the keyboard, and test if these two employees are the same.
// (4) Read two employee records from the keyboard, and test if one employee’s ID is less than another employee’s ID
// (5) Quit:  close all the files, and quit.

  cout << "------------------------------------Menu--------------------------------------------------------------------------------------------------------------------" << endl;
  cout << "(1) Read an employee record from the keyboard, and display it on the screen, and write it to the output file simultaneously" << endl;
  cout << "(2) Read a specified number of the employee records from the input file, and display them on the screen, and write them to the output file simultaneously." << endl;
  cout << "(3) Read two employee records from the keyboard, and test if these two employees are the same." << endl;
  cout << "(4) Read two employee records from the keyboard, and test if one employee’s ID is less than another employee’s ID" << endl;
  cout << "(5) Quit:  close all the files, and quit" << endl;
  cout << "PLEASE ENTER YOUR CHOICE" << endl;
  int choice = 0;
  cin >> choice;

  switch (choice)
  {
  case 1:
    checklink();
    // read_rec();
    break;
  case 2:
    read_specified();
    break;
  // case 3:
  //   read_2_equal();
  //   break;
  // case 4:
  //   read_2_compare();
  //   break;
  // case 5:
  //   cout << "Exiting...";
  //   exit(3000ms);
  //   break;
  default:
    cout << "Wrong Choice";
  }

  return 0;
}
