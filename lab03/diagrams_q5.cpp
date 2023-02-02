#include <iostream>
using namespace std;

int main ()
{
    int n, y;

    cout << "n => ";
    cin >> n;

    for (int i = -(n); i <= n; i = i + 2)
    {
        if (i < 0)
        {
            y = -(i);
        }
        else
        {
            y = i;
        }
        cout << y << " ";
    }

    return 0;
}