#include <iostream>
using namespace std;

int main ()
{
    int n;

    cout << "n => ";
    cin >> n;

    int i = n - 1;
    int m = 1;

    while (i >= 0)
    {
        int j = 0;

        while (j < i)
        {
            cout << ".";
            j = j + 1;
        }

        int k = 0;
        
        while (k < m)
        {
            cout << "*";
            k++;
        }

        cout << "*";
        cout << endl;
        
        m = m + 2;
        i = i - 1;
    }

    return 0;

    // codeshare.io/PdMryX
    // codeshare.io/qP1okX
}