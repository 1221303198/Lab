#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

void testMySin (long double x, int maxNoOfTerms);
long double myImprovedSin (long double x, int noOfTerms);
long double get_radiian (double degree);

int main ()
{
    long double radiian;
    double degree;
    cout << "Angle in degree => ";
    cin >> degree;

    int maxNoOfTerms;
    cout << "Max number of terms => ";
    cin >> maxNoOfTerms;
    cout << endl;

    radiian = get_radiian (degree);

    testMySin (radiian, maxNoOfTerms);

    return 0;
}


void testMySin (long double x, int maxNoOfTerms)
{
    cout << "Entering testMySin () ..." << endl;
    cout.setf (ios::fixed);

    for (int n = 1; n <= maxNoOfTerms; n++)
    {
        cout << "Number of terms = ";
        cout.width (4);
        cout << n;

        cout.precision (4);
        cout << " => sin(" << x << "): " << endl;

        cout << "-> My Result         : ";
        cout.precision (30);
        cout << myImprovedSin (x, n) << endl;

        cout << "-> Standard Library  : ";
        cout.precision (30);
        cout << sin (x) << endl;

        cout << "-> Difference        : ";
        cout.precision (30);
        cout << abs (myImprovedSin (x, n) - sin (x)) << endl;
        cout << endl;
    }

    cout << "testMySin () completed." << endl;
    cout << endl;
}

long double myImprovedSin (long double x, int noOfTerms)
{
    int maxN = 2 * noOfTerms - 1;
    long double sum = x;
    long double term = x;
    int n = 3;

    while (n <= maxN)
    {
        term = -term * ((x * x) / (n * (n - 1)));
        sum = sum + term;
        
        n = n + 2;
    }

    return sum;
}

long double get_radiian (double degree)
{
    long double pi = M_PI;
    long double radiian = degree * (pi / 180.0);

    return radiian;
}