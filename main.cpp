#include <iostream>
#include <cmath>
using namespace std;
int main() {
  const float PI = 3.14159;
  int user_choice;
  cout << "Geometry Calculator\n"
      << "1. Calculate the Area of a Circle\n"
      << "2. Calculate the Area of a Rectangle\n"
      << "3. Calculate the Area of a Triangle\n"
      << "4. Quit\n";
     cout << "Enter your chouse (1-4): ";
  cin >> user_choice;
  cout << endl;
  switch (user_choice)
    {
      float area;
      case 1:
        int radius;
        cout << "What is the radius: ";
        cin >> radius;
        if (radius < 0)
        {
          cout << "We're sorry. \nThe radius must be"
               << " a positive number.\n"
               << "Rerun the program and try again.";
             cout << endl;
          
        } 
        else
        {
          area = PI * pow(radius, 2);
          cout << "The area of the circle is " << area << endl;
          
        }
      break;
      
      case 2:
        float width, length;
        cout << "What is the length: ";
        cin >> length;
        if (length > 0) 
        {
          cout << "What is the width: ";  
          cin >> width;
          if (width > 0)
          {
            area = length * width;
            cout << "The area of the rectangle is " <<               area << endl;
            
          } 
          else 
          {
            cout << "We're sorry. \nWidth must be                     greater than 0. \n"
                 << "Rerun the program and try again.";
            cout << endl;
          }
        }
        else
        {
          cout << "We're sorry. \nLength must be greater           than 0. \n"
               << "Rerun the program and try again.";
          cout << endl;
        }
      break;
      case 3:
        float height,
              base;
        cout << "What is the base: ";
        cin >> base;
        if (base > 0)
        {
          cout << "What is the height: ";
          cin >> height;
          if (height > 0)
          {
            area = (base * height) * 0.5;
            cout << "The area of the triangle is " << area << endl;
            
          }
          else
          {
            cout << "We're sorry. \nHeight must be greater than 0. \n"
                 << "Rerun the program and try again.";
            cout << endl;   
          }
        }           else 
         {
            cout << "We're sorry. \nBase must be greater than 0. \n"
                 << "Rerun the program and try again.";
            cout << endl;   
          }
      break;
      case 4:
        cout << "Program ending.\n";
      break;
      default:
        cout << "We're sorry. \nYour choice must be between 1 and 4. \n"
             << "Rerun the program and try again.";
        cout << endl;
      break;
      return 0;
    }
}
