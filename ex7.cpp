//https://repl.it/@mannydev/ex7#main.cpp

#include <iostream>
#include <stdio.h>
#include <string>
#include <cctype>
#include <vector>
using namespace std;
int main() {
  char input;
  vector <char> numbers;
  cout << "Enter Q to finsih or a valid number: \n";
  cin >> input;
  
  while(input != 'Q' || input != 'q'){
    if(input == 'Q' || input == 'q'){
      break;
    }
    else if(!isdigit(input)){
        cout << "Enter a valid number: ";
        cin >> input;
        numbers.push_back(input);
    }
    else{
      cin >> input;
      numbers.push_back(input);
    }
  }
  cout << "Q is pressed: Program is ended \n";
  cout << "Total number of values entered: " << sizeof(numbers)/sizeof(numbers[0]);
