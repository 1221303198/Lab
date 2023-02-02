#include <iostream>
#include <Windows.h>
using namespace std;

// declaration of functions
void display (char ch1, char ch2, char ch3, char ch4, char ch5, char ch6);
void rotate (char& ch1, char& ch2, char& ch3, char& ch4, char& ch5, char& ch6);
void displayMain (char ch);
void displayA ();
void displayB ();
void displayC ();
void displayD ();
void displayE ();
void displayF ();
void displayG ();
void displayH ();
void displayI ();
void displayJ ();
void displayK ();
void displayL ();
void displayM ();
void displayN ();
void displayO ();
void displayP ();
void displayQ ();
void displayR ();
void displayS ();
void displayT ();
void displayU ();
void displayV ();
void displayW ();
void displayX ();
void displayY ();
void displayZ ();
void displayExclamation ();
void displayQuestion ();

// main function
int main ()
{
    char ch1, ch2, ch3, ch4, ch5, ch6;
    int count = 0;
    int n = INT_MAX;

    // get characters from user
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
    
    // loop to keep the billboard running 
    while (count < n)
    {
        display (ch1, ch2, ch3, ch4, ch5, ch6);   // call the display function
        rotate (ch1, ch2, ch3, ch4, ch5, ch6);    // call the rotate fucntion
        Sleep (900);                              // slow down the output displayed

        // or use system ("cls");

        count++;
    }

    return 0;
}


// definition of function to display characters
void display (char ch1, char ch2, char ch3, char ch4, char ch5, char ch6)
{
    displayMain (ch1);        // call the displayMain function (to check character input by user)
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

// definition of function to rotate characters
void rotate (char& ch1, char& ch2, char& ch3, char& ch4, char& ch5, char& ch6)
{
    char temp;

    temp = ch1;
    ch1 = ch2;
    ch2 = ch3;
    ch3 = ch4;
    ch4 = ch5;
    ch5 = ch6;
    ch6 = temp;
}

// definition of function to check character inputs by user
void displayMain (char ch)
{
    switch (ch)
    {
        case 'A':              // check for uppercase
        case 'a':              // check for lowercase
            displayA ();       // call the specific display function (to display the actual character)
            break;
        case 'B':
        case 'b':
            displayB ();
            break;
        case 'C':
        case 'c':
            displayC ();
            break;
        case 'D':
        case 'd':
            displayD ();
            break;
        case 'E':
        case 'e':
            displayE ();
            break;
        case 'F':
        case 'f':
            displayF ();
            break;
        case 'G':
        case 'g':
            displayG ();
            break;
        case 'H':
        case 'h':
            displayH ();
            break;
        case 'I':
        case 'i':
            displayI ();
            break;
        case 'J':
        case 'j':
            displayJ ();
            break;
        case 'K':
        case 'k':
            displayK ();
            break;
        case 'L':
        case 'l':
            displayL ();
            break;
        case 'M':
        case 'm':
            displayM ();
            break;
        case 'N':
        case 'n':
            displayN ();
            break;
        case 'O':
        case 'o':
            displayO ();
            break;
        case 'P':
        case 'p':
            displayP ();
            break;
        case 'Q':
        case 'q':
            displayQ ();
            break;
        case 'R':
        case 'r':
            displayR ();
            break;
        case 'S':
        case 's':
            displayS ();
            break;
        case 'T':
        case 't':
            displayT ();
            break;
        case 'U':
        case 'u':
            displayU ();
            break;
        case 'V':
        case 'v':
            displayV ();
            break;
        case 'W':
        case 'w':
            displayW ();
            break;
        case 'X':
        case 'x':
            displayX ();
            break;
        case 'Y':
        case 'y':
            displayY ();
            break;
        case 'Z':
        case 'z':
            displayZ ();
            break;
        case '!':
            displayExclamation ();
            break;
        case '?':
            displayQuestion ();
            break;
        // error message for characters that are not supported
        default:
            cout << "Character not supported!" << endl;    
            break;
    }
}

// specific display functions for all supported characters
void displayA ()
{
    cout << "  A  " << endl;
    cout << " A A " << endl;
    cout << "A   A" << endl;
    cout << "AAAAA" << endl;
    cout << "A   A" << endl;
}

void displayB ()
{
    cout << "BBBB " << endl;
    cout << "B   B" << endl;
    cout << "BBBB " << endl;
    cout << "B   B" << endl;
    cout << "BBBB " << endl;
}

void displayC ()
{
    cout << " CCCC" << endl;
    cout << "C    " << endl;
    cout << "C    " << endl;
    cout << "C    " << endl;
    cout << " CCCC" << endl;
}

void displayD ()
{
    cout << "DDDD " << endl;
    cout << "D   D" << endl;
    cout << "D   D" << endl;
    cout << "D   D" << endl;
    cout << "DDDD " << endl;
}

void displayE ()
{
    cout << "EEEEE" << endl;
    cout << "E    " << endl;
    cout << "EEEEE" << endl;
    cout << "E    " << endl;
    cout << "EEEEE" << endl;
}

void displayF ()
{
    cout << "FFFFF" << endl;
    cout << "F    " << endl;
    cout << "FFFFF" << endl;
    cout << "F    " << endl;
    cout << "F    " << endl;
}

void displayG ()
{
    cout << "GGGGG" << endl;
    cout << "G    " << endl;
    cout << "G GGG" << endl;
    cout << "G   G" << endl;
    cout << "GGGGG" << endl;
}

void displayH ()
{
    cout << "H   H" << endl;
    cout << "H   H" << endl;
    cout << "HHHHH" << endl;
    cout << "H   H" << endl;
    cout << "H   H" << endl;
}

void displayI ()
{
    cout << "IIIII" << endl;
    cout << "  I  " << endl;
    cout << "  I  " << endl;
    cout << "  I  " << endl;
    cout << "IIIII" << endl;
}

void displayJ ()
{
    cout << "JJJJJ" << endl;
    cout << "    J" << endl;
    cout << "    J" << endl;
    cout << " J  J" << endl;
    cout << " JJJJ" << endl;
}

void displayK ()
{
    cout << "K   K" << endl;
    cout << "K  K " << endl;
    cout << "KKK  " << endl;
    cout << "K  K " << endl;
    cout << "K   K" << endl;
}

void displayL ()
{
    cout << "L    " << endl;
    cout << "L    " << endl;
    cout << "L    " << endl;
    cout << "L    " << endl;
    cout << "LLLLL" << endl;
}

void displayM ()
{
    cout << "M   M" << endl;
    cout << "MM MM" << endl;
    cout << "M M M" << endl;
    cout << "M   M" << endl;
    cout << "M   M" << endl;
}

void displayN ()
{
    cout << "N   N" << endl;
    cout << "NN  N" << endl;
    cout << "N N N" << endl;
    cout << "N  NN" << endl;
    cout << "N   N" << endl;
}

void displayO ()
{
    cout << " OOO " << endl;
    cout << "O   O" << endl;
    cout << "O   O" << endl;
    cout << "O   O" << endl;
    cout << " OOO" << endl;
}

void displayP ()
{
    cout << "PPPP " << endl;
    cout << "P   P" << endl;
    cout << "PPPP " << endl;
    cout << "P    " << endl;
    cout << "P    " << endl;
}

void displayQ ()
{
    cout << " QQQ " << endl;
    cout << "Q   Q" << endl;
    cout << "Q   Q" << endl;
    cout << " QQQ " << endl;
    cout << "    Q" << endl;
}

void displayR ()
{
    cout << "RRRR " << endl;
    cout << "R   R" << endl;
    cout << "RRRR " << endl;
    cout << "R R  " << endl;
    cout << "R  R " << endl;
}

void displayS ()
{
    cout << " SSSS" << endl;
    cout << "S    " << endl;
    cout << " SSSS" << endl;
    cout << "    S" << endl;
    cout << "SSSS " << endl;
}

void displayT ()
{
    cout << "TTTTT" << endl;
    cout << "  T  " << endl;
    cout << "  T  " << endl;
    cout << "  T  " << endl;
    cout << "  T  " << endl;
}

void displayU ()
{
    cout << "U   U" << endl;
    cout << "U   U" << endl;
    cout << "U   U" << endl;
    cout << "U   U" << endl;
    cout << " UUU " << endl;
}

void displayV ()
{
    cout << "V   V" << endl;
    cout << "V   V" << endl;
    cout << "V   V" << endl;
    cout << " V V " << endl;
    cout << "  V  " << endl;
}

void displayW ()
{
    cout << "W   W" << endl;
    cout << "W   W" << endl;
    cout << "W W W" << endl;
    cout << "W W W" << endl;
    cout << " W W " << endl;
}

void displayX ()
{
    cout << "X   X" << endl;
    cout << " X X " << endl;
    cout << "  X  " << endl;
    cout << " X X " << endl;
    cout << "X   X" << endl;
}

void displayY ()
{
    cout << "Y   Y" << endl;
    cout << " Y Y " << endl;
    cout << "  Y  " << endl;
    cout << "  Y  " << endl;
    cout << "  Y  " << endl;
}

void displayZ ()
{
    cout << "ZZZZZ" << endl;
    cout << "   Z " << endl;
    cout << "  Z  " << endl;
    cout << " Z   " << endl;
    cout << "ZZZZZ" << endl;
}

void displayExclamation ()
{
    cout << "  !  " << endl;
    cout << "  !  " << endl;
    cout << "  !  " << endl;
    cout << "     " << endl;
    cout << "  !  " << endl;
}

void displayQuestion ()
{
    cout << " ??? " << endl;
    cout << "?   ?" << endl;
    cout << "   ? " << endl;
    cout << "  ?  " << endl;
    cout << "  ?  " << endl;
}
