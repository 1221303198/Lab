#include <iostream>
#include <climits>
using namespace std;

int main ()
{
    int number;
    int largest;
    int counter;

    largest = INT_MIN;
    counter = 0;
    
    while (counter < 4)
    {
        cout << "Enter a number => ";
        cin >> number;
        if (number > largest)
        {
            largest = number;
        }
        counter = counter + 1;
    }

    cout << "Largest = " << largest << endl;

    return 0;
}