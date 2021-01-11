#include <iostream>
using namespace std;
// https://repl.it/@mannydev/ada-monday-ex4-even-odd#main.cpp
int main()
{
    int num;

    cout << "Please enter a value? ";
    cin >> num;

    if ( num % 2 == 0)
        cout << num << " is an even number";
    else
        cout << num << " is and odd  number";
}
