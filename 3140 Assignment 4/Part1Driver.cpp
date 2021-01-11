//Name: Lukas Bowden
//Student Number: T00040951
//Date: 2020-10-17
//Description: Creates a multiplication table of any size based on the users input
#include <iostream>
#include "multiTable.h"
#include "multitable.cpp"
using namespace std;

int main()
{
 //Creates int variable to get user input
 int userInput;

 //Asks user for input then creates a new multitable object based on that input
 cout << "Enter the size of the multiplication table(to quit: -1):";
 cin >> userInput;
 multitable table(userInput);

 //While loop that keeps asking for input until user enters -1
 while(userInput != -1)
 {
  //Calls the createtable() function inside the multitable class to perform calculations and print the result   
  table.createTable();
  cout << "\n";
  cout << "Enter the size of the multiplication table(to quit: -1):";
  cin >> userInput;

  //Changes the multitable object's table size based on new userinput
  table.setTableSize(userInput);
 }

 cout << "\n" << "Thank you for using my program!";
 return 0;
}