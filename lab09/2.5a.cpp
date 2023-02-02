#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

void testMyCos (long double x, int maxNoOfTerms);
long double myImprovedCos (long double x, int noOfTerms);
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

    testMyCos (radiian, maxNoOfTerms);

    return 0;
}


void testMyCos (long double x, int maxNoOfTerms)
{
    cout << "Entering testMyCos () ..." << endl;
    cout.setf (ios::fixed);

    for (int n = 1; n <= maxNoOfTerms; n++)
    {
        cout << "Number of terms = ";
        cout.width (4);
        cout << n;

        cout.precision (4);
        cout << " => cos(" << x << "): " << endl;

        cout << "-> My Result         : ";
        cout.precision (30);
        cout << myImprovedCos (x, n) << endl;

        cout << "-> Standard Library  : ";
        cout.precision (30);
        cout << cos (x) << endl;

        cout << "-> Difference        : ";
        cout.precision (30);
        cout << abs (myImprovedCos (x, n) - cos (x)) << endl;
        cout << endl;
    }

    cout << "testMyCos () completed." << endl;
    cout << endl;
}

long double myImprovedCos (long double x, int noOfTerms)
{
    int maxN = 2 * noOfTerms - 2;
    long double sum = 1.0;
    long double term = 1.0;
    int n = 2;

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