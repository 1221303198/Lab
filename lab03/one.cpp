#include <iostream>
using namespace std;

int main ()
{
    int n, r;
    int counter = 0;

    cout << "n => ";
    cin >> n;
    cout << "n => " << n << endl;
    
    while (n > 1)
    {
        counter++;
        r = n%2;
        if (r == 0)
        {
            n = n/2;
        }
        else
        {
            n = 3*n + 1;
        }

        cout << "n =>" << n << endl;
    }

    cout << "Count = " << counter << endl;

    return 0;
}