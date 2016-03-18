#include "Person.h"



bool Person::validateBirthday(time_t date)
{
  if (date >= time(0))
    return false;
  else
    return true;
}

Person::Person() : first_name_("Max"), last_name_("Musterpenis"), birthday_date_(time(0))
{
}

Person::Person(string first, string last, time_t birthday)
{
  if (validateBirthday(birthday))
    birthday_date_ = birthday;
  else
    birthday_date_ = time(0);

  first_name_ = first;
  last_name_ = last;
}


Person::~Person()
{
}

void Person::setFirstname(const string name)
{
}

void Person::setLastname(const string name)
{
}

void Person::setBirthday(const time_t date)
{
}

const string Person::getFullName()
{
  return string();
}
