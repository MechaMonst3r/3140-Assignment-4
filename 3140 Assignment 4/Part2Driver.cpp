//Name: Lukas Bowden
//Student Number: T00040951
//Date: 2020-10-18
//Description: Creates a pascal's triangle of any size based on the users input
#include <iostream>
#include "pascal.h"
#include "pascal.cpp"
using namespace std;

int main()
{
  int userInput;

 //Asks user for input then creates a new pascal object based on that input
 cout << "Enter the size of the Pascal triangle(to quit: -1):";
 cin >> userInput;
 pascal triangle(userInput);

 //While loop that keeps asking for input until user enters -1
 while(userInput != -1)
 {
  //Calls the createTriangle() function inside the pascal class to perform calculations and print the result   
  triangle.createTriangle();
  cout << "\n";
  cout << "Enter the size of the Pascal triangle(to quit: -1):";
  cin >> userInput;

  //Changes the pascal object's triangle size based on new userinput
  triangle.setTriangleSize(userInput);
 }

 cout << "\n" << "Thank you for using my program!";
 return 0;   
}