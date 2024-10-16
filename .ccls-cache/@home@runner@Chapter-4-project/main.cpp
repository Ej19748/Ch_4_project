#include <iostream>
using namespace std;
int main() {
  int year, month;
  cout << "Enter a year: ";
  cin >> year;
  cout << "Enter a month: ";
  cin >> month;
  cout << endl;
  switch (month)
    {
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
        cout << "31 days";
        break;
      case 4:
      case 6:
      case 9:
      case 11:
        cout << "30 days";
        break;
      case 2:
        if (year % 4 == 0)
          cout << "29 days";
        else
          cout << "28 days";
        break;
      default:
        cout << "Invalid month";
    
    }
  return 0;
}