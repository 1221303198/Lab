#include <iostream>
using namespace std;

void displayH ();
void displayO ();
void displayExclamation ();
void display (char ch);

int main ()
{
    display ('H');
    cout << endl;
    display ('O');
    cout << endl;
    display ('H');
    cout << endl;
    display ('O');
    cout << endl;
    display ('!');
    cout << endl;

    return 0;
}



void displayH ()
{
    cout << "H   H" << endl;
    cout << "H   H" << endl;
    cout << "HHHHH" << endl;
    cout << "H   H" << endl;
    cout << "H   H" << endl;
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

void display (char ch)
{
    switch (ch)
    {
        case 'H':
            displayH ();
            break;
        case 'O':
            displayO ();
            break;
        case '!':
            displayExclamation ();
            break;
    }
}