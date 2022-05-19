#include "Timetable.h"
#include <iostream>
#include <cstring>
using namespace std;
Timetable::Timetable(){
  
}
void Timetable::setSchool(string schl){
  school=schl;
}
string Timetable::getSchool(){
  return school;
}
int Timetable::setDay(int wday){
  day=wday;
}
int Timetable::getDay(){
  return day;
}
void Timetable::dispalyMusic(){
  getDay();
  switch(day){
  case 1:
      cout << endl
           << "Day:Monday" << endl
           << "Subject:History of Music" << endl
           << "Time:8.30am";
      break;
    case 2:
      cout << endl
           << "Day:Tuseday" << endl
           << "Subject:Classic Music" << endl
           << "Time:10.30am";
      break;
    case 3:
      cout << endl
           << "Day:Wednessday" << endl
           << "Subject:Assingment" << endl
           << "Time:9.30am";
      break;
    case 4:
      cout << endl
           << "Day:Thursday" << endl
           << "Subject:Sri Lnkan Music" << endl
           << "Time:8.30am";
      break;
    case 5:
      cout << endl
           << "Day:Friday" << endl
           << "Subject:Practicals" << endl
           << "Time:7.30am";
      break;
    } 
}
void Timetable::dispalyTechnology(){
  getDay();
  switch (day) {
    case 1:
      cout << endl
           << "Day:Monday" << endl
           << "Subject:OOC" << endl
           << "Time:8.30am";
      break;
    case 2:
      cout << endl
           << "Day:Tuseday" << endl
           << "Subject:ISDM" << endl
           << "Time:10.30am";
      break;
    case 3:
      cout << endl
           << "Day:Wednessday" << endl
           << "Subject:EAP" << endl
           << "Time:9.30am";
      break;
    case 4:
      cout << endl
           << "Day:Thursday" << endl
           << "Subject:IWT" << endl
           << "Time:8.30am";
      break;
    case 5:
      cout << endl
           << "Day:Friday" << endl
           << "Subject:SPM" << endl
           << "Time:7.30am";
      break;
    }
}
void Timetable::dispalyBusiness(){
  getDay();
   switch (getDay()) {
    case 1:
      cout << endl
           << "Day:Monday" << endl
           << "Subject:Economics" << endl
           << "Time:8.30am";
      break;
    case 2:
      cout << endl
           << "Day:Tuseday" << endl
           << "Subject:Accounting" << endl
           << "Time:10.30am";
      break;
    case 3:
      cout << endl
           << "Day:Wednessday" << endl
           << "Subject:Human Resource Management" << endl
           << "Time:9.30am";
      break;
    case 4:
      cout << endl
           << "Day:Thursday" << endl
           << "Subject:Advertising and Marketing Communications" << endl
           << "Time:8.30am";
      break;
    case 5:
      cout << endl
           << "Day:Friday" << endl
           << "Subject:International Busines" << endl
           << "Time:7.30am";
      break;
    }
}