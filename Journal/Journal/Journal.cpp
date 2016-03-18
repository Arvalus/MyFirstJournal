#include "iostream"
#include "string"
#include "Person.h"


using std::cout;
using std::endl;
using std::cin;

int main()
{
  string vorname_;
  string nachname_;
  Person P1 = Person();
  Person P2 = Person("Martin", "Troyer");
  cout << "Geben Sie einen Vornamen ein: ";
  cin >> vorname_;
  cout << endl << "Geben Sie einen Nachname ein: ";
  cin >> nachname_;
  Person P3 = Person(vorname_, nachname_);
  

  
  return 0;
}

