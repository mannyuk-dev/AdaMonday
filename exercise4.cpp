#include <iostream>
using namespace std;

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
