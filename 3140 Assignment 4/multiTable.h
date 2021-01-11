//Name: Lukas Bowden
//Student Number: T00040951
//Date: 2020-10-17
//Description: Header file for the multitable class
#ifndef MULTITABLE_DEF
#define MULTITABLE_DEF

class multitable
{
 private:
     int table_size;

 public: 
     multitable();
     multitable(int x);
     multitable(multitable& multitable1);
     ~multitable();
     int getTableSize();
     void setTableSize(int x);
     void createTable();
     void printTable();
};

#endif