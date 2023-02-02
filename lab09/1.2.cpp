#include <iostream>
using namespace std;

double power (double x, int n);
int factorial (int n);
void testPower (double x, int maxPower);
void testFactorial (int maxN);

int main ()
{
    double x;
    int n;
    
    cout << endl;
    cout << "Testing x ^ n and n! function" << endl;
    cout << "x => ";
    cin >> x;
    cout << "n => ";
    cin >> n;
    cout << endl;

    cout << x << " ^ ";
    cout << n << " = ";
    cout.precision (15);
    cout << power (x,n) << endl << endl;

    cout << n << "! = ";
    cout << factorial (n) << endl;
    cout << endl;

    //testPower (x, n);
    //testFactorial (n);

    return 0;
}


double power (double x, int n)
{
    double p = 1.0;
    int c = 0;

    while (c < n)
    {
        p = p * x;
        c++;
    }

    return p;
}

int factorial (int n)
{
    int f = 1;
    int c = n;

    while (c > 1)
    {
        f = f * c;
        c = c - 1;
    }

    return f;
}

void testPower (double x, int maxPower)
{
    cout.setf (ios::fixed);
    for (int n = 1; n <= maxPower; n++)
    {
        cout.precision (4);
        cout << x << " ^ ";
        cout.width (2);
        cout << n << " = ";
        cout.precision (15);
        cout << power (x, n) << endl;
    }

    cout << endl;
}

void testFactorial (int maxN)
{
    for (int n = 0; n <= maxN; n++)
    {
        cout.width (2);
        cout << n << "! = ";
        cout << factorial (n) << endl;
    }

    cout << endl;
}