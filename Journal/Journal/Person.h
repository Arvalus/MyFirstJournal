


#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <ctime> 

using std::string;

class Person
{
private:
  string first_name_;
  string last_name_;
  time_t birthday_date_;

  bool validateBirthday(time_t date);
  
public:
  Person();
  Person(const string first, const string last, const time_t birthday = time(0));
  virtual ~Person();

  const string getFirstName() const { return first_name_; };
  const string getLastName() const { return last_name_; };
  const time_t getBirthday() const { return birthday_date_; };
  void setFirstname(const string name);
  void setLastname(const string name);
  void setBirthday(const time_t date);

  const string getFullName(); 

};

#endif

