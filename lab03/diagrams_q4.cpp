#include <iostream>
using namespace std;

int main ()
{
    int n;

    cout << "n => ";
    cin >> n;

    for (int i = n; i >= 1; i = i - 1)
    {
        cout << i << " ";
    }

    return 0;
}