#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
  //temp string
  string temp_string;

  //temp int
  int temp_int;

  //grade
  double g1, g2, g3, g4, g5;

  //weight
  double w1, w2, w3, w4, w5;

  //gpa
  double gpa;

  //inputs
  int steps;
  int step = 0;

  cin >> iterations;

  while(step < steps)
  {
    
    step++;
  }

  cout << "Welcome to PFI GPA calculator\n";

  //begin first logic sequence
  cout << "Enter the grade (A,B,C,D,F) for your class number 1\n";

  cin >> temp_string;

  if(temp_string == "A")
    g1 = 4;
  else if(temp_string == "B")
    g1 = 3;
  else if(temp_string == "C")
    g1 = 2;
  else if(temp_string == "D")
    g1 = 1;
  else if(temp_string == "F")
    g1 = 0;
  else
  {
    cout << "You did not enter A or B or C or D or F.\n";
    cout << "Your input was overridden as 'F'\n";

    g1 = 0;
  }

  cout << "Enter hours (1..5) for your class number 1\n";

  cin >> temp_int;

  if((temp_int == 1) || (temp_int == 2) || (temp_int == 3) || (temp_int == 4) || (temp_int == 5))
  {
    w1 = temp_int;
  }
  else
  {
    cout << "You did not enter hours within 1 and 5.\n";
    cout << "Your input was overridden as 1\n";

    w1 = 1;
  }

  //begin second logic sequence
  cout << "Enter the grade (A,B,C,D,F) for your class number 2\n";

  cin >> temp_string;

  if(temp_string == "A")
    g2 = 4;
  else if(temp_string == "B")
    g2 = 3;
  else if(temp_string == "C")
    g2 = 2;
  else if(temp_string == "D")
    g2 = 1;
  else if(temp_string == "F")
    g2 = 0;
  else
  {
    cout << "You did not enter A or B or C or D or F.\n";
    cout << "Your input was overridden as 'F'\n";

    g2 = 0;
  }

  cout << "Enter hours (1..5) for your class number 2\n";

  cin >> temp_int;

  if((temp_int == 1) || (temp_int == 2) || (temp_int == 3) || (temp_int == 4) || (temp_int == 5))
  {
    w2 = temp_int;
  }
  else
  {
    cout << "You did not enter hours within 1 and 5.\n";
    cout << "Your input was overridden as 1\n";

    w2 = 1;
  }

  //begin third logic sequence
  cout << "Enter the grade (A,B,C,D,F) for your class number 3\n";

  cin >> temp_string;

  if(temp_string == "A")
    g3 = 4;
  else if(temp_string == "B")
    g3 = 3;
  else if(temp_string == "C")
    g3 = 2;
  else if(temp_string == "D")
    g3 = 1;
  else if(temp_string == "F")
    g3 = 0;
  else
  {
    cout << "You did not enter A or B or C or D or F.\n";
    cout << "Your input was overridden as 'F'\n";

    g3 = 0;
  }

  cout << "Enter hours (1..5) for your class number 3\n";

  cin >> temp_int;

  if((temp_int == 1) || (temp_int == 2) || (temp_int == 3) || (temp_int == 4) || (temp_int == 5))
  {
    w3 = temp_int;
  }
  else
  {
    cout << "You did not enter hours within 1 and 5.\n";
    cout << "Your input was overridden as 1\n";

    w3 = 1;
  }

  //being fourth logic sequence
  cout << "Enter the grade (A,B,C,D,F) for your class number 4\n";

  cin >> temp_string;

  if(temp_string == "A")
    g4 = 4;
  else if(temp_string == "B")
    g4 = 3;
  else if(temp_string == "C")
    g4 = 2;
  else if(temp_string == "D")
    g4 = 1;
  else if(temp_string == "F")
    g4 = 0;
  else
  {
    cout << "You did not enter A or B or C or D or F.\n";
    cout << "Your input was overridden as 'F'\n";

    g4 = 0;
  }

  cout << "Enter hours (1..5) for your class number 4\n";

  cin >> temp_int;

  if((temp_int == 1) || (temp_int == 2) || (temp_int == 3) || (temp_int == 4) || (temp_int == 5))
  {
    w4 = temp_int;
  }
  else
  {
    cout << "You did not enter hours within 1 and 5.\n";
    cout << "Your input was overridden as 1\n";

    w4 = 1;
  }

  //being firth logic sequence
  cout << "Enter the grade (A,B,C,D,F) for your class number 5\n";

  cin >> temp_string;

  if(temp_string == "A")
    g5 = 4;
  else if(temp_string == "B")
    g5 = 3;
  else if(temp_string == "C")
    g5 = 2;
  else if(temp_string == "D")
    g5 = 1;
  else if(temp_string == "F")
    g5 = 0;
  else
  {
    cout << "You did not enter A or B or C or D or F.\n";
    cout << "Your input was overridden as 'F'\n";

    g5 = 0;
  }

  cout << "Enter hours (1..5) for your class number 5\n";

  cin >> temp_int;

  if((temp_int == 1) || (temp_int == 2) || (temp_int == 3) || (temp_int == 4) || (temp_int == 5))
  {
    w5 = temp_int;
  }
  else
  {
    cout << "You did not enter hours within 1 and 5.\n";
    cout << "Your input was overridden as 1\n";

    w5 = 1;
  }

  gpa = ((w1 * g1) + (w2 * g2) + (w3 * g3) + (w4 * g4) + (w5 * g5)) / (w1 + w2 + w3 + w4 + w5);

  //calculate GPA
  cout << "Congratulations, your GPA was " << gpa << "\n";

  return 0;
}
