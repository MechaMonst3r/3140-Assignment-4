//Name: Lukas Bowden
//Student Number: T00040951
//Date: 2020-10-17
//Description: Implementation file for the multitable class
#include <iostream>
#include "multiTable.h"
using namespace std;


//Default constructor
multitable :: multitable()
{
 table_size = 1;
}

//Parameterized constructor
multitable :: multitable(int x)
{
 table_size = x;
}

//Copy constructor
multitable :: multitable(multitable& multitable1)
{
  table_size = multitable1.getTableSize();  
}

//Destructor
multitable :: ~multitable()
{

}

//Mutators for the multitable class
int multitable :: getTableSize()
{
  return table_size;
}

void multitable :: setTableSize(int x)
{
 table_size = x;
}

//Creates, formats, and prints the multiplication table
void multitable :: createTable()
{
 //Creates a 2D array on Heap Space based on the given table size.
 int** table = new int*[table_size];
 for(int i = 0; i < table_size; i++)
 {
   table[i] = new int[table_size];   
 }

 //Using pointers to pointers, iterates through the Heap array
 for(int i = 0; i < table_size; i++)
 {  
  for(int j = 0; j < table_size; j++)
  { 
    //Performs multiplication calculations and places it in the correct index
    *(*(table + i) + j) = (i + 1) * (j + 1);
    
    //Formats and prints the current index to be nice and neat.
    if(*(*(table + i) + j) >= 10)
    {
     cout << *(*(table + i) + j) << " ";
    }

    else
    {
     cout << " " << *(*(table + i) + j) << " ";
    }
  }
  //Continues to format, making every row on a new line.
  cout << "\n";
 }
}

