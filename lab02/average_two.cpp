/*
    Filename: average-two.cpp

    The following program intends calculate the average of two numbers.

    Unfortunately, the program has error(s).

    Debug the program to fix the error(s).

 */
#include <iostream>
using namespace std;

int main()
{
    int number1, number2;

    cout << "Enter the 1st number: ";
    cin >> number1;
    cout << "Enter the 2nd number: ";
    cin >> number2;

    float average = (number1 + number2) / 2.0f;

    cout << "Average of " << number1
         << " and "       << number2
         << " is "        << average
         << endl;

    
    return 0;

}