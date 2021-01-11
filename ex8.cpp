#include<iostream>
#include<vector>
using namespace std;

// https://repl.it/@mannydev/ex8#main.cpp
int main ()
{

    vector <int> arr;
    int n, i, max, min;
    cin >> n;
    cout << "Please enter a valid numeric, or “Q” to finish:";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
            cout << "Enter a valid number : ";
    }
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
            cout << "Invalid value, please try again: ";
    }

    cout << "\nTotal numbers :" << sizeof(arr);
    cout << "\nLargest  value: " << max;
    cout << "\nSmallest  value: " << min;
    return 0;
}
