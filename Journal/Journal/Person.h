
#ifndef PERSON_H
#define PERSON_H

#include <string>

using std::string;

class Person
{
private:
  string first_name_;
  string last_name_;
  static char name_tmp[50];
  int FormatName;
  int Month;
  int Day;
  int Year;
  int FormatDate;
  static char birthdayDate[50];

public:
  Person();
  ~Person();

  const string getFirstName() const { return first_name_; };
  const string getLastName() const { return last_name_; };
  const string getFullName();
  const string getNameFormat();
  char *getBirthday();
  char *getBirthdayFormat();
  void setFirstname(const string name);
  void setLastname(const string name);
  void setDay(int local_Day) { Day = local_Day; };
  void setMonth(int local_Month) { Month = local_Month; };
  void setYear(int local_Year) { Year = local_Year; };
  void setBirthday(int Day_set, int Month_set, int Year_set);
  void setFormatDate(int local_Dateformat) { FormatDate = local_Dateformat; };
  void setFormatName(int local_Nameformat) { FormatName = local_Nameformat; };


};

#endif

