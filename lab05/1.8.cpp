#include <iostream>
using namespace std;

int main ()
{
    int i = 0;
    int n;

    cout << "n => ";
    cin >> n;

    while (i < n)
    {
        int j = 0;

        while (j < i)
        {
            cout << ".";
            j = j + 1;
        }

        cout << "*";
        cout << endl;

        i = i + 1;
    }

    return 0;
}