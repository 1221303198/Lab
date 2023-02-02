#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
    int secret1, secret2;
    int guess1, guess2;

    srand(2);

    secret1 = rand() % 6 + 1;
    secret2 = rand() % 6 + 1;

    cout << "Secrets = " << secret1 << " " << secret2 << endl;

    int maxTrials = 5;
    int trialNum = 1;

    while (trialNum <= maxTrials)
    {
        cout << "Trial number = " << trialNum << endl;

        cout << "Your guesses => ";
        cin >> guess1 >> guess2;
        cout << "Guesses = " << guess1 << " " << guess2 << endl;

        cout << endl;
        trialNum = trialNum + 1;
    }

    return 0;
}

