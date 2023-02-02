#include <iostream>
using namespace std;

int main ()
{
    int i = 0;

    while (i < 9)
    {
        int j = 0;

        while (j < 9)
        {
            cout << i;
            j = j + 1;
        }

        cout << endl;

        i = i + 1;
    }

    return 0;
}