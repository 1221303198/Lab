#include <iostream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;

void display (const string& text);
void rotateLeft (string& text);
void rotateRight (string& text);
void delay (int milliseconds);

int main ()
{
    string greenText1 = "PROGRAMMING     ";
    string greenText2 = "IS FUN!         ";

    while (true)
    {
        system ("cls");
        display (greenText1);
        rotateLeft (greenText1);
        display (greenText2);
        rotateRight (greenText2);
        delay (200);
    }

    return 0;
}

void display (const string& text)
{
    int size = text.length ();

    for (int i = 0; i < size; ++i)
    {
        cout << text [i];
    }

    cout << endl;
}

void rotateLeft (string& text)
{
    int size = text.length ();
    
    int tempChar = text [0];

    for (int i = 0; i < size - 1; ++i)
    {
        text [i] = text [i + 1];
    }

    text [size - 1] = tempChar;
}

void rotateRight (string& text)
{
    int size = text.length ();
    
    int tempChar = text [size - 1];

    for (int i = size - 1; i > 0; --i)
    {
        text [i] = text [i - 1];
    }

    text [0] = tempChar;
}

void delay (int milliseconds)
{
    this_thread::sleep_for (chrono::milliseconds (milliseconds));
}
