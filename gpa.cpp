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

    // the following code below can be cleaned with the utilization of arrays:

    if(step == 0)
      cin >> c0;
    else if(step == 1)
      cin >> c1;
    else if(step == 2)
      cin >> c2;
    else if(step == 3)
      cin >> c3;
    else if(step == 4)
      cin >> c4;
    else if(step == 5)
      cin >> c5;
    else if(step == 6)
      cin >> c6;
    else if(step == 7)
      cin >> c7;
    else if(step == 8)
      cin >> c8;
    else if(step == 9)
      cin >> c9;
    else
      cout << "Error\n";

    // the same can be said about the course numbers input

    cout << "Input course number:\n";

    if(step == 0)
      cin >> cn0;
    else if(step == 1)
      cin >> cn1;
    else if(step == 2)
      cin >> cn2;
    else if(step == 3)
      cin >> cn3;
    else if(step == 4)
      cin >> cn4;
    else if(step == 5)
      cin >> cn5;
    else if(step == 6)
      cin >> cn6;
    else if(step == 7)
      cin >> cn7;
    else if(step == 8)
      cin >> cn8;
    else if(step == 9)
      cin >> cn9;
    else
      cout << "Error\n";

    cout << "Input course grade. [A, B, C, D, or F]\n";
    cin >> string_input;

    if(string_input == "A")
      running_grade += 4;
    else if (string_input == "B")
      running_grade += 3;
    else if (string_input == "C")
      running_grade += 2;
    else if (string_input == "D")
      running_grade += 1;
    else if (string_input == "F")
      running_grade += 0;
    else
      cout << "Incorrect course grade.\n"

    cout << "Input course credit hours. [5, 4, 3, 2, or 1]\n";
    cin >> string_input;

    if(string_input == "5")
      running_weight += 5;
    else if (string_input == "4")
      running_weight += 4;
    else if (string_input == "3")
      running_weight += 3;
    else if (string_input == "2")
      running_weight += 2;
    else if (string_input == "1")
      running_weight += 1;
    else
      cout << "Incorrect course weight.\n"

    step++;
  }

  //prevent division by zero.

  if( running_weight )
  {
    gpa = ( running_grade * running_weight ) / ( running_weight );

    cout << "Congratulations, your GPA was " << gpa << "\n";
  }
  else
  {
    cout << "Error - invalid running_weight valule.\n";
  }

  return 0;
}
