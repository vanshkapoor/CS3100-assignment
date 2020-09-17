#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
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
bool  operator ==(const Employee& p1, const Employee &p2)
{
  if(p1.getFirstname()!=p2.getFirstname()||p1.getLastname()!=p2.getLastname()||p1.getID()!=p2.getID())
  return false;
  return true;
}

bool  operator < (const Employee& p1, const Employee &p2)
{
  return p1.getID()<p1.getID();
}










//
//
//
//
//
//
// int checklink()
// {
//   cout << "works";
// }
//
// void readandwriteFile(int n)
// {
//   int cnt = 0;
//   int readandwritecount = 0;
//   fstream file;
//   ofstream filewrite;
//   string word;
//   string filename = "Small-Database.txt";
//   string writefilename = "Output-Database.txt";
//   file.open(filename.c_str());
//   filewrite.open(writefilename.c_str(), ios::app);
//
//   cout << endl;
//   cout << endl;
//   cout << "------ DATA BASE FILE ----" << endl;
//   cout << endl;
//   cout << endl;
//   cout << "FIRSTNAME  -  LASTNAME  - ID" << endl;
//   cout << endl;
//   filewrite << endl;
//   while (file >> word)
//   {
//
//     if (readandwritecount < n)
//     {
//       cout << word << "     ";
//       filewrite << word << " ";
//       cnt++;
//       if (cnt == 3)
//       {
//         cout << endl;
//         cnt = 0;
//         readandwritecount++;
//         filewrite << endl;
//       }
//     }
//   }
//   cout << endl;
//   cout << "ABOVE RECORDS ADDED TO OUTPUT FILE SUCCESSFULLY!";
//   file.close();
//   filewrite.close();
// }
//
// void read_employee()
// {
//   Employee e;
//   int id;
//   string fn, ln;
//   string filename = "Output-Database.txt";
//
//   cout << "Enter details of the employee: " << endl;
//   cout << "Enter firstname: " << endl;
//   cin >> fn;
//   cout << "Enter lastname: " << endl;
//   cin >> ln;
//   cout << "Enter ID: " << endl;
//   cin >> id;
//   while (id > 9999999)
//   {
//     cout << "ID should be less than 9999999. Enter again :";
//     cin >> id;
//   }
//   e.setFirstname(fn);
//   e.setLastname(ln);
//   e.setID(id);
//
//   cout << endl;
//   cout << endl;
//   cout << "--- Your Details ---" << endl;
//   cout << "Firstname :   " << e.getFirstname() << endl;
//   cout << "Lastame :   " << e.getLastname() << endl;
//   cout << "ID :   " << e.getID() << endl;
//   cout << endl;
//   cout << endl;
//   cout << "Writing to file ..." << endl;
//   ofstream file;
//   file.open(filename.c_str(), ios::app);
//   file << endl;
//   file << e.getFirstname() << " " << e.getLastname() << " " << e.getID();
//   file.close();
//   cout << endl;
//
//   cout << "Successfully written and saved.";
// }
//
// void read_specified(int total_cnt)
// {
//   cout << "Enter number of records to be read" << endl;
//   int n;
//   cin >> n;
//   if (n == 0)
//   {
//     return;
//   }
//   if (n > total_cnt || n > 99)
//   {
//     cout << "OOPS! FILE DOESN'T CONTAIN SO MANY ELEMENTS! TRY WITH LESSER VALUE" << endl;
//     return;
//   }
//   else
//   {
//     readandwriteFile(n);
//   }
// }
//
//
//
//
// void read_2_equal()
// {
//   Employee e[2];
//   for (int i = 0; i < 2; i++)
//
//   {
//
//     int id;
//     string fn, ln;
//     cout << "Enter details of the employee " << i + 1 << ": " << endl;
//     cout << "Enter firstname: " << endl;
//     cin>>fn;
//     cout << "Enter lastname: " << endl;
//     cin>>ln;
//     cout << "Enter ID: " << endl;
//     cin >> id;
//     e[i].setFirstname(fn);
//     e[i].setLastname(ln);
//     e[i].setID(id);
//   }
//   if(e[0]==e[1])
//
//     cout<<"These are same employees"<<endl;
//
//
//   else
//   cout<<"These are  diffrent employees"<<endl;
//
// }
//
// void read_2_compare()
// {
//   Employee e[2];
//   for (int i = 0; i < 2; i++)
//
//   {
//
//     int id;
//     string fn, ln;
//     cout << "Enter details of the employee " << i + 1 << ": " << endl;
//     cout << "Enter firstname: " << endl;
//     cin>>fn;
//     cout << "Enter lastname: " << endl;
//     cin>>ln;
//     cout << "Enter ID: " << endl;
//     cin >> id;
//     e[i].setFirstname(fn);
//     e[i].setLastname(ln);
//     e[i].setID(id);
//   }
//   if (e[0] < e[1])
//   {
//     cout << "Employee " << e[1].getFirstname()<< " has greater employee ID";
//   }
//   else
//   {
//     cout << "Employee " << e[0].getFirstname() << " has greater employee ID";
//   }
// }
//
//
// // int main()
// // {
// //     // THIS CPP FILE WILL BE USED TO :
// //     // IMPLEMENT THE EMPLOYEE FUNCTIONS
// //     // MORE FUNCTIONS WILL ADDED WHICH WILL BE USED BY MAIN.CPP
//
// //     return 0;
// // }
