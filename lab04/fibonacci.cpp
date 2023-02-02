#include <iostream>
using namespace std;

int main ()
{
    int n;
    long long int term1 = 0;
    long long int term2 = 1;

    cout << "n => ";
    cin >> n;

    if (n > 93)
    {
        cout << "Sorry!" << endl;
        cout << "This program is only capable of producing the first 93 terms of the Fibonacci Series!" << endl;
        cout << "Please enter a number less than 94." << endl;
    }
    else if (n <= 0)
    {
        cout << "Please enter a positive integer!" << endl;
    }
    else
    {
        cout << "The first " << n << " terms of the Fibonacci Series: " << endl;

        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                cout << term1 << " ";
                continue;
            }
            if (i == 1)
            {
                cout << term2 << " ";
                continue;
            }

            long long int newterm = term1 + term2;
            term1 = term2;
            term2 = newterm;

            cout << newterm << " ";
        }

        // using the while loop
        /*int count = 0;

        while (count < n)
        {
            if (count == 0)
            {
                cout << term1 << " ";
                count = count + 1;
                continue;
            }
            if (count == 1)
            {
                cout << term2 << " ";
                count = count + 1;
                continue;
            }
            
            int newterm = term1 + term2;
            cout << newterm << " ";

            term1 = term2;
            term2 = newterm;
            
            count = count + 1;
        }*/
    }

    return 0;
}