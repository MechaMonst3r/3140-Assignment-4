//Name: Lukas Bowden
//Student Number: T00040951
//Date: 2020-10-18
//Description: Header file for the pascal class
#ifndef PASCAL_DEF
#define PASCAL_DEF

class pascal
{
 private:
     int triangle_size;

 public: 
     pascal();
     pascal(int x);
     pascal(pascal& pascal1);
     ~pascal();
     int getTriangleSize();
     void setTriangleSize(int x);
     void createTriangle();
};

#endif