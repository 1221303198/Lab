#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
    int number, guess, tries = 0;
    srand (time(0));
    number = rand() % 100 + 1;
    cout << "Guess The Number" << endl;

    do
    {
        cout << "Enter a guess between 1 and 100: " << endl;
        cin >> guess;
        tries++;

        if (guess > number)
            cout << "Your guess is too high! Try again" << endl;
        else if (guess < number)
            cout << "Your guess is too less! Try again" << endl;
        else
            cout << "Your guess is correct! You got it in " << tries << " guesses! Congratulatios!\n" << endl;
    } while (guess != number);
    
    return 0;
}