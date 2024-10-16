#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
  const int weight_min = 0,
            weight_max = 20,
            distance_min = 10,
            distance_max = 3000;
  float package_weight, distance, total_charges = 0;
  cout << "\nWhat is the weight of the package in kilograms? ";
  cin >> package_weight;
  if (package_weight <= weight_min || package_weight > weight_max)
  {
    cout << "\nWe're sorry, package weight must be more than 0kg "
         << "and less than 20kg. \nPlease try again.";  
  }
  else
  {
    cout << "\nDistance? ";
    cin >> distance;
    if (distance < distance_min || distance > distance_max)
    cout << "We're sorry, the distance must be within 10 and 3000 miles. \nPlease try again.";
    else
    {
      if (package_weight <= 2)
        total_charges = (distance / 500) * 1.10;
      else if (package_weight > 2 && package_weight <= 6)
        total_charges = (distance / 500) * 2.20;
      else if (package_weight > 6 && package_weight <= 10)
        total_charges = (distance / 500) * 3.70;
      else if (package_weight > 10 && package_weight <= 20)
        total_charges = (distance / 500) * 4.80;
      cout << setprecision(2) << fixed;
      cout << "\nTotal charges are $" << total_charges << endl; 
      cout << "Thank you for using our shipping company!";
    }
  }
        
  return 0;
}