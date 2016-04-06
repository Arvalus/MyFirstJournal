#include <iostream>
#include"Person.h"
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
  std::string tmp_string;
  int FormatName;
  int FormatDate;
  int tmp_Date;
  Person Martin;
  Person Anyone;

  cout << Martin.getFullName() << endl;
  cout << Martin.getBirthday() << endl;
  cout << endl;
  Martin.setBirthday(29, 12, 1984);
  cout << "------------Mein Geburtstag-----------" << endl;
  cout << Martin.getBirthday() << endl;
  cout << endl;

  cout << "------------Mein Name-----------------" << endl;
  Martin.setFirstname("Martin");
  Martin.setLastname("Troyer");
  cout << Martin.getNameFormat() << endl;
  cout << endl;

  Martin.setFormatDate(4);
  Martin.setFormatName(3);
  cout << "---------und nun formatiert------------" << endl;
  cout << Martin.getNameFormat() << endl;
  cout << Martin.getBirthdayFormat() << endl;

  cout << endl;
  cout << "----------------Nun mit Eingabe------------" << endl;
  cout << "Bitte geben Sie Ihren Namen ein:" << endl;
  cout << "Vorname: ";
  cin >> tmp_string;
  Anyone.setFirstname(tmp_string);
  cout << endl << "Nachname: ";
  cin >> tmp_string;
  Anyone.setLastname(tmp_string);
  cout << endl << "Bitte geben Sie das gewünschte Format ein:" << endl;
  cout << "Format = 1  Max Mustermann" << endl;
  cout << "Format = 2  Mustermann, Max" << endl;
  cout << "Format = 3  M. Mustermann" << endl;
  cin >> FormatName;
  Anyone.setFormatName(FormatName);
  cout << Anyone.getNameFormat() << endl;

  cout << "Bitte geben Sie Ihr Geburtsdatum ein:" << endl;
  cout << "Tag: ";
  cin >> tmp_Date;
  Anyone.setDay(tmp_Date);
  cout << endl << "Monat: ";
  cin >> tmp_Date;
  Anyone.setMonth(tmp_Date);
  cout << endl << "Jahr: ";
  cin >> tmp_Date;
  Anyone.setYear(tmp_Date);
  cout << endl << "Bitte geben sie das gewünschte Format ein:" << endl;
  cout << "Format = 1  Jan 01, 1900" << endl;
  cout << "Format = 3  01.01.1900" << endl;
  cout << "Format = 4  01 Jan 1900" << endl;
  cin >> FormatDate;
  Anyone.setFormatDate(FormatDate);
  cout << Anyone.getBirthdayFormat() << endl;
  cout << endl << endl;
  cout << "---------------Klasse anyone--------------" << endl;
  cout << Anyone.getNameFormat() << endl;
  cout << Anyone.getBirthdayFormat() << endl;

  cout << endl << "------------ENDE-------------" << endl;

}