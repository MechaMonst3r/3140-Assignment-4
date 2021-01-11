//Name: Lukas Bowden
//Student Number: T00040951
//Date: 2020-10-18
//Description: Implementaion file for the pascal class
#include <iostream>
#include "pascal.h"
using namespace std;

//Default constructor
pascal :: pascal()
{
 triangle_size = 1;  
}

//Parameterized constructor
pascal :: pascal(int x)
{
 triangle_size = x;  
}

//Copy constructor
pascal :: pascal(pascal& pascal1)
{
 triangle_size = pascal1.getTriangleSize();
}

//Destructor
pascal :: ~pascal()
{

}

//Mutators for the Pascal class
int pascal :: getTriangleSize()
{
 return triangle_size;  
}

void pascal :: setTriangleSize(int x)
{
 triangle_size = x;
}

//Creates and prints a Pascal Triangle
void pascal :: createTriangle()
{
 //Initilazing an array on heap.   
 int** triangle = new int*[triangle_size];
 for(int i = 0; i < triangle_size; i++)
 {
   triangle[i] = new int[triangle_size];   
 }
 
 //Traverses the array using pointers of pointers.
 for(int i = 0; i < triangle_size; i++)
 {
   for(int j = 0; j <= i; j++)
   {
    //Sets the outside of the triangle to 1's   
    if(i == j || j == 0)
    {
     *(*(triangle + i) + j) = 1;
     //Prints out the 1's   
     cout << *(*(triangle + i) + j) << " "; 
    }
    else
    {
     //Calculates the inner triangle based on the numbers one row above and left of above.
     *(*(triangle + i) + j) = *(*(triangle + (i - 1)) + (j - 1)) + *(*(triangle + (i - 1)) + j); 
     
     //Prints out the triangle
     cout << *(*(triangle + i) + j) << " "; 
    }      
   }

  //Starts a new line of the triangle 
  cout << "\n";   
 }
}