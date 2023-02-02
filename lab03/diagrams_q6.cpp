#include <iostream>
using namespace std;

int main ()
{
    int n, sum;

    sum = 0;

    cout << "n => ";
    cin >> n;

    for (int i = 1; i < n; i = i + 2)
    {
        sum = sum + i;
        cout << sum << " ";
    }

    return 0;
}