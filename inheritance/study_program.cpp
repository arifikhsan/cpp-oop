#include <iostream>

using namespace std;

class StudyProgram
{
  public:
    string name;
    string kaprodi;
};

class TeknikInformatika : public StudyProgram // inheritance
{
  public:
    string name;
};

class SistemInformasi : public StudyProgram
{
  public:
    string name;
};

class ManajemenInformasi : public StudyProgram
{
  public:
    string name;
};

int main()
{
}
