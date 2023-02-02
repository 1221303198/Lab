#include <iostream>
using namespace std;

int main ()
{
    int number;
    int product;
    int counter;

    product = 1;
    counter = 0;
    while (counter < 5)
    {
        cout << "Enter number " << counter + 1 << " => ";
        cin >> number;
        product = product * number;
        counter = counter + 1;
    }

    cout << "Product = " << product << endl;

    return 0;
}
