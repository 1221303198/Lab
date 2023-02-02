#include <iostream>
using namespace std;

void display (char ch1, char ch2, char ch3, char ch4, char ch5, char ch6);
void displayMain (char ch);
void displayH ();
void displayE ();
void displayL ();
void displayO ();
void displayExclamation ();

int main ()
{
    char ch1, ch2, ch3, ch4, ch5, ch6;
    cout << "Character #1 => ";
    cin >> ch1;
    cout << "Character #2 => ";
    cin >> ch2;
    cout << "Character #3 => ";
    cin >> ch3;
    cout << "Character #4 => ";
    cin >> ch4;
    cout << "Character #5 => ";
    cin >> ch5;
    cout << "Character #6 => ";
    cin >> ch6;

    display (ch1, ch2, ch3, ch4, ch5, ch6);

    return 0;
}

void display (char ch1, char ch2, char ch3, char ch4, char ch5, char ch6)
{
    displayMain (ch1);
    cout << endl;
    displayMain (ch2);
    cout << endl;
    displayMain (ch3);
    cout << endl;
    displayMain (ch4);
    cout << endl;
    displayMain (ch5);
    cout << endl;
    displayMain (ch6);
    cout << endl;
}

void displayH ()
{
    cout << "H   H" << endl;
    cout << "H   H" << endl;
    cout << "HHHHH" << endl;
    cout << "H   H" << endl;
    cout << "H   H" << endl;
}

void displayE ()
{
    cout << "EEEEE" << endl;
    cout << "E    " << endl;
    cout << "EEEEE" << endl;
    cout << "E    " << endl;
    cout << "EEEEE" << endl;
}

void displayL ()
{
    cout << "L    " << endl;
    cout << "L    " << endl;
    cout << "L    " << endl;
    cout << "L    " << endl;
    cout << "LLLLL" << endl;
}

void displayO ()
{
    cout << " OOO " << endl;
    cout << "O   O" << endl;
    cout << "O   O" << endl;
    cout << "O   O" << endl;
    cout << " OOO" << endl;
}

void displayExclamation ()
{
    cout << "  !  " << endl;
    cout << "  !  " << endl;
    cout << "  !  " << endl;
    cout << "     " << endl;
    cout << "  !  " << endl;
}

void displayMain (char ch)
{
    switch (ch)
    {
        case 'H':
            displayH ();
            break;
        case 'E':
            displayE ();
            break;
        case 'L':
            displayL ();
            break;
        case 'O':
            displayO ();
            break;
        case '!':
            displayExclamation ();
            break;
    }
}