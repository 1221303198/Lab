#include <iostream>
using namespace std;

int main ()
{
    int age;
     
    cout << "Enter age => ";
    cin >> age;

    cout << "Your age is " << age << endl;

    cout << "Good day! ";

    if (age > 25)
    {
        cout << "Hello senior." << endl;
    }
    else
    {
        if (age > 15)
        {
            cout << "Hi friend." << endl;
        }
        else
        {
            cout << "Want sweets?" << endl;
        }
        
    }

    cout << "Goodbye!" << endl;

    return 0;
}