#include "Person.h"
#include <time.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>

using std::cout;
using std::endl;

std::string tmp_name;
std::string value;

char Person::birthdayDate[50];

Person::Person() 
{
  time_t ZeitDatum;
  struct tm *AktuellesDatum;
  ZeitDatum = time(NULL);
  AktuellesDatum = localtime(&ZeitDatum);
  Month = AktuellesDatum->tm_mon + 1;
  Day = AktuellesDatum->tm_mday;
  Year = AktuellesDatum->tm_year + 1900;
  sprintf(birthdayDate, "%02d.%02d.%04d", Day, Month, Year);
  FormatDate = 1;
  first_name_ = "Max";
  last_name_ = "Mustermann";
  FormatName = 1;
  cout << endl << "Name mittels Constructor erstellt!" << endl;
}

Person::~Person()
{
  cout << endl << "Person: Destructor " << first_name_ << " " << last_name_ << endl;
}

void Person::setFirstname(const string name)
{
  first_name_ = name;
}

void Person::setLastname(const string name)
{
  last_name_ = name;
}

void Person::setBirthday(int Day_set, int Month_set, int Year_set)
{

  time_t timeDate;
  struct tm *Today;
  timeDate = time(NULL);
  Today = localtime(&timeDate);
  

  if ((Year_set > 1910) && (Year_set < Today->tm_year + 1900))
  {
    Year = Year_set;
  }
  else
    Year = Today->tm_year + 1900;

  if ((Month_set > 0) && (Month_set < 13))
  {
    Month = Month_set;
  }
  else
    Month = Today->tm_mon + 1;
  
  if ((Day_set > 0) && (Day_set < 32))
  {
    Day = Day_set;
  }
  else
    Day = Today->tm_mday;
}



const string Person::getFullName()
{
  std::string tmp_string;
  tmp_string = first_name_ + " " + last_name_;
  return tmp_string;
}

//return Name in following format:
//  Format = 1  Max Mustermann
//  Format = 2  Mustermann, Max
//  Format = 3  M. Mustermann

const string Person::getNameFormat()
{
  switch (FormatName)
  {
  case 2: tmp_name = last_name_ + ", " + first_name_;
    break;
  case 3: value = first_name_[0];
    tmp_name = value + ". " + last_name_;
    break;
  case 1:
  default: tmp_name = first_name_ + " " + last_name_;
    break;
  }
  return tmp_name;
}

char *Person::getBirthday()
{
  sprintf(birthdayDate, "%02d.%02d.%04d", Day, Month, Year);
  return birthdayDate;
}

char *Person::getBirthdayFormat()
{
  char NameMonth[13][4];
  strcpy(NameMonth[1], "Jan");
  strcpy(NameMonth[2], "Feb");
  strcpy(NameMonth[3], "Mar");
  strcpy(NameMonth[4], "Apr");
  strcpy(NameMonth[5], "Mai");
  strcpy(NameMonth[6], "Jun");
  strcpy(NameMonth[7], "Jul");
  strcpy(NameMonth[8], "Aug");
  strcpy(NameMonth[9], "Sep");
  strcpy(NameMonth[10], "Okt");
  strcpy(NameMonth[11], "Nov");
  strcpy(NameMonth[12], "Dez");

  //return Date in following Formats:
  //    Format = 1  Jan 01, 1900
  //    Format = 2  01.01.00
  //    Format = 3  01.01.1900
  //    Format = 4  01 Jan 1900
  switch (FormatDate)
  {
  case 2: sprintf(birthdayDate, "%02d.´%02d.%02d", Day, Month, Year - 1970);
    break;
  case 3: sprintf(birthdayDate, "%02d.%02d.%04d", Day, Month, Year);
    break;
  case 4: sprintf(birthdayDate, "%d %s %04d",  Day, NameMonth[Month], Year);
    break;
  case 1: 
  default: sprintf(birthdayDate, "%s %d, %04d", NameMonth[Month], Day, Year);
  }
  return birthdayDate;
}
