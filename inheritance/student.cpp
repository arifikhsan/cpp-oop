#include <iostream>

using namespace std;

class Person
{
  public:
    string name;
};

class Student : public Person // inheritance
{
  public:
    string studentId;
};

class Instructor : public Person
{
  public:
    string instructorId;
};

int main()
{
    Student student;
    student.name = "Arif Ikhsanudin";
    student.studentId = "1811021";
}
