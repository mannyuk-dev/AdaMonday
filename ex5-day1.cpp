//Excercise 5
https://repl.it/@mannydev/ex5-day1#main.cpp


#include <iostream>
#include <string>

int main() {
  std :: string age;
  std :: string retire;

  int year = 2021;

  std::cout << "Please enter your current age? ";
  getline(std::cin, age);

  int cAge = stoi(age);

  std::cout << "At what age would you like to retire? ";
  getline(std::cin, retire);

  int rAge = stoi(retire);
  int ageDiff = rAge - cAge;
  int retirementYear = year + ageDiff;

  std::cout << "The current year is: " <<  year << " can retire in "<< retirementYear << "; you have "<< ageDiff <<" years remaining.";

  return 0;
}
