#include <iostream>
using namespace std;
// https://repl.it/@mannydev/ada-monday-ex6#main.cpp
int main()
{
    int age;
    int pulse;

    cout << "Please enter a your age: ";
    cin >> age;

    cout << "Please enter resting pulse: ";
    cin >> pulse;

    cout << "\n\nResting pulse: " << pulse << "\tAge: " << age;


    cout << "\n\nIntensity\t\tRate ";
    cout << "\n.....................................\n";

    double count = 0.4;

    for (int i = 0; i < 12; i++) {

      int rate = (( 220 - age - pulse) *  count) + pulse;

      cout << count * 100  << "%" << "\t\t\t\t" << rate << "\n";
      count = count + 0.05;

    }
}
