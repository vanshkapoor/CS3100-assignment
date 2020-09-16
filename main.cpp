#include <iostream>
#include <bits/stdc++.h>
#include <fstream>
#include "employee.cpp"

using namespace std;

int total_cnt = 0;

void readFile()
{
  fstream file;
  string word;
  int cnt = 0;
  string filename = "Small-Database.txt";
  file.open(filename.c_str());
  cout << endl;
  cout << endl;
  cout << "------ DATA BASE FILE ----" << endl;
  cout << endl;
  cout << endl;
  cout << "FIRSTNAME  -  LASTNAME  - ID" << endl;
  cout << endl;
  while (file >> word)
  {

    cout << word << "     ";
    cnt++;
    if (cnt == 3)
    {
      cout << endl;
      cnt = 0;
      total_cnt++;
    }
  }
  cout << endl;
  cout << "TOTAL RECORD COUNT = " << total_cnt << endl;
  file.close();
}

int main()
{
  // STEP 1 : READ INPUT FILE AND DISPLAY IT
  readFile();
  cout << endl;
  cout << endl;
a:
  cout << "------------------------------------Menu--------------------------------------------------------------------------------------------------------------------" << endl;
  cout << "(1) INSERT AN EMPLOYEE RECORD TO DATABASE" << endl;
  cout << "(2) TRANSFER N NUMBER OF RECORDS FROM INPUT FILE TO OUTPUT FILE." << endl;
  cout << "(3) INSERT AND CHECK TWO EMPLOYEE RECORDS FOR EQUALITY." << endl;
  cout << "(4) INSERT TWO RECORDS AND COMPARE THEIR ID'S" << endl;
  cout << "(5) QUIT" << endl;
  cout << "PLEASE ENTER YOUR CHOICE" << endl;
  int choice = 0;
  cin >> choice;

  switch (choice)
  {
  case 1:
    // checklink();
    read_employee();
    break;
  case 2:
    read_specified(total_cnt);
    break;
  case 3:
    read_2_equal();
    break;
  case 4:
    read_2_compare();
    break;
  case 5:
    cout << "All files closing and Exiting...";
    exit(3000);
    break;
  default:
    cout << "Wrong Choice";
  }
  goto a;
  return 0;
}
