#include <iostream>
#include <string>

// https://repl.it/@mannydev/exercise-2-f-to-c#main.cpp
using namespace std;

int main() {
  string temperature;
  string answer;
  cout << "Please enter the starting temperature: ";
  getline(cin, temperature);
  int x = stoi( temperature );

  cout << "Press ‘C’ to convert from Fahrenheit to Centigrade or ‘F’ to convert from Centigrade to Fahrenheit: ";
  getline(cin , answer); 


  if( answer == "F") {
     int fah = ( x * 9 / 5) + 32;
       cout << "Your choice is: F\n";
       cout << x << " degrees Fahrenheit in C is: " << fah ;
  }

  if( answer == "C") {
     int c = (x -32) * 5 / 9;
       cout << "Your choice is: C\n";
       cout << x << " degrees Celcius in F is: " << c ;
  }
}
