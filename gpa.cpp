#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
  //string input
  string string_input;

  //grade
  double running_grade = 0;

  //weight
  double running_weight = 0;

  //course names - limited to 9 w/out arrays
  string c0,c1,c2,c3,c4,c5,c6,c7,c8,c9 = "";

  //course numbers - limited to 9 w/out arrays
  string cn0,cn1,cn2,cn3,cn4,cn5,cn6,cn7,cn8,cn9 = "";

  //gpa
  double gpa;

  //validator
  bool validated;

  //inputs
  int steps;
  int step = 0;

  cout << "Welcome to PFI GPA calculator\n";
  cout << "How many classes would you like to input?\n";

  cin >> steps;

  while(step < steps)
  {
    cout << "Input course #" << step + 1 << " name:\n";



    // since I am contrained to not utilize arrays, I am forced to create 10 vars for course name input
    // this means an error with occur if the user input is greater than or equal to 10.

    // utilization of arrays would be preferable

    // int
    validated = false;
    while(!validated)
    {
      if(step == 0)
      {
        cin >> c0;
        validated = true;
      }
      else if(step == 1)
      {
        cin >> c1;
        validated = true;
      }
      else if(step == 2)
      {
        cin >> c2;
        validated = true;
      }
      else if(step == 3)
      {
        cin >> c3;
        validated = true;
      }
      else if(step == 4)
      {
        cin >> c4;
        validated = true;
      }
      else if(step == 5)
      {
        cin >> c5;
        validated = true;
      }
      else if(step == 6)
      {
        cin >> c6;
        validated = true;
      }
      else if(step == 7)
      {
        cin >> c7;
        validated = true;
      }
      else if(step == 8)
      {
        cin >> c8;
        validated = true;
      }
      else if(step == 9)
      {
        cin >> c9;
        validated = true;
      }
      else
      {
        cout << "Error\n";
      }

      if(!validated)
      {
        cout << "Incorrect input. Try again";
      }
    }

    // the same can be said about the course numbers input

    // int
    validated = false;
    while(!validated)
    {
      cout << "Input course number:\n";

      if(step == 0)
      {
        cin >> cn0;
        validated = true;
      }
      else if(step == 1)
      {
        cin >> cn1;
        validated = true;
      }
      else if(step == 2)
      {
        cin >> cn2;
        validated = true;
      }
      else if(step == 3)
      {
        cin >> cn3;
        validated = true;
      }
      else if(step == 4)
      {
        cin >> cn4;
        validated = true;
      }
      else if(step == 5)
      {
        cin >> cn5;
        validated = true;
      }
      else if(step == 6)
      {
        cin >> cn6;
        validated = true;
      }
      else if(step == 7)
      {
        cin >> cn7;
        validated = true;
      }
      else if(step == 8)
      {
        cin >> cn8;
        validated = true;
      }
      else if(step == 9)
      {
        cin >> cn9;
        validated = true;
      }
      else
      {
        cout << "Error\n";
      }

      if(!validated)
      {
        cout << "Incorrect input. Try again\n";
      }
    }

    // int
    validated = false;
    while(!validated)
    {
      cout << "Input course grade. [A, B, C, D, or F]\n";
      cin >> string_input;

      if(string_input == "A")
      {
        running_grade += 4;
        validated = true;
      }
      else if (string_input == "B")
      {
        running_grade += 3;
        validated = true;
      }
      else if (string_input == "C")
      {
        running_grade += 2;
        validated = true;
      }
      else if (string_input == "D")
      {
        running_grade += 1;
        validated = true;
      }
      else if (string_input == "F")
      {
        validated = true;
      }
      else
      {
        cout << "Incorrect course grade.\n";
      }

      if(!validated)
      {
        cout << "Incorrect input. Try again\n";
      }
    }

    // int
    validated = false;
    while(!validated)
    {
      cout << "Input course weight. [5, 4, 3, 2, or 1]\n";
      cin >> string_input;

      if(string_input == "5")
      {
        running_weight += 5;
        validated = true;
      }
      else if (string_input == "4")
      {
        running_weight += 4;
        validated = true;
      }
      else if (string_input == "3")
      {
        running_weight += 3;
        validated = true;
      }
      else if (string_input == "2")
      {
        running_weight += 2;
        validated = true;
      }
      else if (string_input == "1")
      {
        running_weight += 1;
        validated = true;
      }
      else
      {
        cout << "Incorrect course weight.\n";
      }

      if(!validated)
      {
        cout << "Incorrect input. Try again\n";
      }
    }

    step++;
  }

  //prevent division by zero.

  if( running_weight )
  {
    gpa = ( running_grade * running_weight ) / ( running_weight * steps );

    for(z=0;z<steps;z++)
    {
      if(z == 0)
      {
        cout << "#" << z << ": " << cn0 << "\n";
      }
      else if(z == 1)
      {
        cout << "#" << z << ": " << cn1 << "\n";
      }
      else if(z == 2)
      {
        cout << "#" << z << ": " << cn2 << "\n";
      }
      else if(z == 3)
      {
        cout << "#" << z << ": " << cn3 << "\n";
      }
      else if(z == 4)
      {
        cout << "#" << z << ": " << cn4 << "\n";
      }
      else if(z == 5)
      {
        cout << "#" << z << ": " << cn5 << "\n";
      }
      else if(z == 6)
      {
        cout << "#" << z << ": " << cn6 << "\n";
      }
      else if(z == 7)
      {
        cout << "#" << z << ": " << cn7 << "\n";
      }
      else if(z == 8)
      {
        cout << "#" << z << ": " << cn8 << "\n";
      }
      else if(z == 9)
      {
        cout << "#" << z << ": " << cn9 << "\n";
      }
    }

    cout << "\nOverall GPA : " << gpa << "\n";
  }
  else
  {
    cout << "Error - invalid running_weight valule.\n";
  }

  return 0;
}
