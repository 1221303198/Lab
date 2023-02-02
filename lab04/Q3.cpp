#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int n;
    int p = 1;
    int i = 1;
    
    cout << "n => ";
    cin >> n;

    while (n > p)
    {
        cout << p << " ";
        p = pow (2, i);
        i++;
    }

    //using for loop
    /*for (int i = 0; n > p; i++)
    {
        cout << p << " ";
        p = pow (2, i);
    }*/

    return 0;
}