#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
    int totalSecrets = 4;
    int secret1, secret2, secret3, secret4;
    int guess1, guess2, guess3, guess4;
    bool validSecrets;

    string replay;
    string stop;
    string repeat;
    bool win = false;
    int maxTrials;
    int trialNum = 1;

    srand(time(0));    //random seed for generator

    cout << endl;
    cout << "Welcome To Vikraman's Mastermind!";
    cout << endl;
    cout << "Let's Play!" << endl;
    cout << endl;
    cout << "I have 4 secret numbers!" << endl;
    cout << "Each number is in range of 1 to 6." << endl;
    cout << endl;
    

    secret1 = rand() % 6 + 1;        //generate numbers
    secret2 = rand() % 6 + 1;
    secret3 = rand() % 6 + 1;
    secret4 = rand() % 6 + 1;
    
    cout << "Secrets = " << secret1 << " " << secret2 << " " << secret3 << " " << secret4 << endl;
    cout << endl;

    do
    {
        cout << endl;
        cout << "Do you wanna be a noob and play with repeating secret numbers? (y/n) ";
        cin >> repeat;
        cout << endl;
        
        if (repeat == "N" || repeat == "n")    //for non repeating numbers
        {
            do
            {
                secret1 = rand() % 6 + 1;
                secret2 = rand() % 6 + 1;
                secret3 = rand() % 6 + 1;
                secret4 = rand() % 6 + 1;

                if (secret1 == secret2 || secret1 == secret3 || secret1 == secret4 || secret2 == secret3 || secret2 == secret4 || secret3 == secret4)
                {
                    validSecrets = false;
                }
                else
                {
                    validSecrets = true;
                }
            }
            while (!validSecrets);
        }
        
        
        cout << "Maximum Number Of Trials => ";    //max num of trials
        cin >> maxTrials;

        while (trialNum <= maxTrials)
        {
            cout << endl;
            cout << "Trial number = " << trialNum << endl;

            int CorrectNumCorrectPos = 0;
            int CorrectNumWrongPos = 0;

            cout << "Your guesses: ";            //guess the numbers
            cout << endl;          
            cout << "Guess 1 => ";
            cin >> guess1;
            cout << "Guess 2 => ";
            cin >> guess2;
            cout << "Guess 3 => ";
            cin >> guess3;
            cout << "Guess 4 => ";
            cin >> guess4;
            cout << endl;

            //make sure the guesses are between 1 and 6
            if (guess1 > 6 || guess2 > 6 || guess3 > 6 || guess4 > 6 || guess1 < 0 || guess2 < 0 || guess3 < 0 || guess4 < 0)
            {
                cout << "Invalid input!" << endl;
                cout << "Number must be in range of 1 to 6" << endl;
                cout << "Try again!" << endl;
            }
            else if (guess1 == 0 && guess2 == 0 && guess3 == 0 && guess4 == 0)   //to abort the game
            {
                cout << "Abort game? (y/n) ";                                    //confirmation of quitting
                cin >> stop;

                if (stop == "y" || stop == "Y")                                  //abort game
                {
                    exit(0);
                }
                else if (stop == "n" || stop == "N")                              //continue game
                {
                    continue;
                }
            }
            else
            {
                cout << "Guesses = " << guess1 << " " << guess2 << " " << guess3 << " " << guess4 << endl;

                if (guess1 == secret1)
                {
                    CorrectNumCorrectPos = CorrectNumCorrectPos + 1;
                }

                if (guess2 == secret2)
                {
                    CorrectNumCorrectPos = CorrectNumCorrectPos + 1;
                }

                if (guess3 == secret3)
                {
                    CorrectNumCorrectPos = CorrectNumCorrectPos + 1;
                }

                if (guess4 == secret4)
                {
                    CorrectNumCorrectPos = CorrectNumCorrectPos + 1;
                }

                if (guess1 == secret2 || guess1 == secret3 || guess1 == secret4)
                {
                    CorrectNumWrongPos = CorrectNumWrongPos + 1;
                }

                if (guess2 == secret1 || guess2 == secret3 || guess2 == secret4)
                {
                    CorrectNumWrongPos = CorrectNumWrongPos + 1;
                }

                if (guess3 == secret1 || guess3 == secret2 || guess3 == secret4)
                {
                    CorrectNumWrongPos = CorrectNumWrongPos + 1;
                }

                if (guess4 == secret1 || guess4 == secret2 || guess4 == secret3)
                {
                    CorrectNumWrongPos = CorrectNumWrongPos + 1;
                }

                cout << "Correct Number, Correct Position: Total = " << CorrectNumCorrectPos << endl;
                cout << "Correct Number, Wrong Position: Total = " << CorrectNumWrongPos << endl;
                cout << endl;

                if (CorrectNumCorrectPos == totalSecrets)
                {
                    win = true;
                    break;
                }

                trialNum = trialNum + 1;
            }

        }

        if (win)
        {
            cout << "Congratulations!" << endl;
            cout << "You Win!" << endl;
            cout << "You have conquered Vikraman's Mastermind!" << endl;
        }
        else
        {
            cout << "Sorry!" << endl;
            cout << "You Lose!" << endl;
            cout << "LOSER! BOOOOO" << endl;
            cout << "Better luck next time!" << endl;
        }

        cout << endl;
        cout << "Restart game? (y/n) ";         //replay the game
        cin >> replay;
    }
    while (replay == "Y" || replay == "y");
    
    return 0;
}