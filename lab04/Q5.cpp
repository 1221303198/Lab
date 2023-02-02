#include <iostream>
using namespace std;

int main ()
{
    int n;

    cout << "n => ";
    cin >> n;

    int p = n;

    while (p > 0)
    {
        cout << p << " ";
        p = p - 1;
    }

    while (p <= n)
    {
        cout << p << " ";
        p++;
    }

    return 0;
}