#include <iostream>
#include <cstring>
using namespace std;

class Timetable{
  private:
    int day;
    string school;
  public:
    Timetable();
    void setSchool(string schl);
    string getSchool();
    int setDay(int wday);
    int getDay();
    void dispalyMusic();
    void dispalyTechnology();
    void dispalyBusiness();
    //~Timetable();
};