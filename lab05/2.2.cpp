#include <iostream>
using namespace std;

int main()
{

    int i = 1, j = 1, k = 0, n;

    cout <<"n => ";
    cin >> n;

    while (i <= n)
    {
        while (j <= n-i)
        {
            cout <<" ";
            j++;
        }

        while (k != 2*i-1) 
        {
            cout << "* ";
            k++;
        }

        i++;
        cout << endl;
    }    

    return 0;
}