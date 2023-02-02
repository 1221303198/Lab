#include <iostream>
using namespace std;

int main ()
{
    int n;

    cout << "n => ";
    cin >> n;

    int i = n - 1;

    while (i >= 0)
    {
        int j = 0;

        while (j < i)
        {
            cout << ".";
            j = j + 1;
        }

        cout << "*";
        cout << endl;

        i = i - 1;
    }

    return 0;
}