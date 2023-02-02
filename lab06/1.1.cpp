#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
    int num;

    srand (time (0));

    int count = 0;

    while (count < 50)
    {
        num = rand() % 6 + 1;
        cout << num << " ";

        count = count + 1;
    }

    return 0;
}