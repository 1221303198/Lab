#include <iostream>
using namespace std;

int main ()
{
    int n;

    cout << "n => ";
    cin >> n;

    int p = -1 * n;

    while (n >= p)
    {
        cout << p << " ";
        p++;
    }

    //using for loop
    /*for (int i = p; n >= i; i++)
    {
        cout << i << " ";
    }*/

    return 0;
}