// 2.1b : Increase Row
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Number of lines => ";
    cin >> n;

    int i;

    i = 0;
    while (i < n)
    {
        int j;

        j = 0;
        while (j < (n - i - 1))
        {
            cout << ".";
            j = j + 1;
        }
        
        int k = 0;
        while (k < (2 * i + 1))
        {
            cout << "*"; 
            k = k + 1;
        }
        cout << endl;

        i = i + 1;
    }