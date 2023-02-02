/*
    Filename: factorial.cpp

    The following program intends to get an integer from the user
    and calculate the factorial of that integer.

    Unfortunately, the program has error(s).

    Debug the program to fix the error(s).

    Recall that the factorial of x is defined as

    x! = x * (x - 1) * ... * 2 * 1
 */

#include <iostream>
using namespace std;

int main()
{
    int number;
    
    cout << "Enter a number: ";
    cin >> number;

    int factorial = 1;
    int counter = 1;
    while (counter <= number)
    {
        factorial = factorial * counter;
        counter = counter + 1;
    }

    cout << number << "! = " << factorial << endl;

    return 0;
}