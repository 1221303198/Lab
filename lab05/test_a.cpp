// 2.1a : Decreasing Row
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Number of lines => ";
    cin >> n;

    int i;
    int m = 1;

    i = n - 1;
    while (i >= 0)
    {
        int j;

        j = 0;
        while (j < i)
        {
            cout << ".";
            j = j + 1;
        }

        int k = 0;
        while (k < m)
        {
            cout << "*"; 
            k = k + 1;
        }
        cout << endl;

        m = m + 2;
        i = i - 1;
    }
}
