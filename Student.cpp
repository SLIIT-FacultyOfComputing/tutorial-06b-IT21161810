#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

// Assign studentId and name
void Student::assignDetails(int pstudentId , const char pname[]) 
{
    pstudentId = studentId;
    strcpy(name,pname);
  
}

// Display StudentId and Name
void Student::display()
{


  cout << "Enter student id : " << studentId << endl;
  cout << "Enter student : " << name << endl;
  
  
}
