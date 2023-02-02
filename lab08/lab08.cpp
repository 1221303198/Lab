#include <iostream>
#include <cstdlib>
using namespace std;

void displayMenu ();
void displayData (int startingAge, int numOfYears, double lumpSumAmount, double yearlyAmount, double interestRate);
void changeData (int& startingAge, int& numOfYears, double& lumpSumAmount, double& yearlyAmount, double& interestRate);
double getCashWithInterest (double cash, double interestRate);
void displayAge (int age);
void displayCash (double cash);
void displayOneLumpSumPlan (int startingAge, int numOfYears, double lumpSumAmount, double interestRate);
double getYearlyAmountWithInterest (double& cash, double interestRate, double yearlyAmount);
void displayYearlyPlan (int startingAge, int numOfYears, double yearlyAmount, double interestRate);
void displayComparison (int startingAge, int numOfYears, double lumpSumAmount, double yearlyAmount, double interestRate);

int main ()
{
    int startingAge = 55;
    int numOfYears = 20;
    double lumpSumAmount = 400000;
    double yearlyAmount = 25000;
    double interestRate = 5;

    char choice;
    bool done = false;

    do
    {
        displayMenu ();
        cin >> choice;
        choice = toupper(choice);
        cout << endl;

        switch (choice)
        {
            case '1':
                displayData (startingAge, numOfYears, lumpSumAmount, yearlyAmount, interestRate);
                break;
            case '2':
                changeData (startingAge, numOfYears, lumpSumAmount, yearlyAmount, interestRate);
                break;
            case '3':
                displayOneLumpSumPlan (startingAge, numOfYears, lumpSumAmount, interestRate);
                break;
            case '4':
                displayYearlyPlan (startingAge, numOfYears, yearlyAmount, interestRate);
                break;
            case '5':
                displayComparison (startingAge, numOfYears, lumpSumAmount, yearlyAmount, interestRate);
                break;
            case 'Q':
                done = true;
                break;
            default:
                cout << "Invalid selection, try again!" << endl;
                cout << endl;
                break;
        }

        system("pause");
    } while (!done);

    cout << endl;
    cout << "Good Bye!" << endl;

    return 0;
    
}


void displayMenu ()
{
    system ("cls");
    cout << "+---------------------------------------------+" << endl;
    cout << "|          Golden Years Finance Inc.          |" << endl;
    cout << "|=============================================|" << endl;
    cout << "| Select:                                     |" << endl;
    cout << "| 1 => Display Data                           |" << endl;
    cout << "| 2 => Change Data                            |" << endl;
    cout << "|---------------------------------------------|" << endl;
    cout << "| 3 => Display One Lump Sum Withdrawal Plan   |" << endl;
    cout << "| 4 => Display Yearly Withdrawal Plan         |" << endl;
    cout << "| 5 => Compare Both Plans                     |" << endl;
    cout << "|---------------------------------------------|" << endl;
    cout << "| Q => Quit                                   |" << endl;
    cout << "+---------------------------------------------+" << endl;
    cout << endl;

    cout << "Choice => ";
}

void displayData (int startingAge, int numOfYears, double lumpSumAmount, double yearlyAmount, double interestRate)
{
    cout << "Starting Age      = " << startingAge << endl;
    cout << "Number of Years   = " << numOfYears << endl;
    cout << "Lump Sum Amount   = " << lumpSumAmount << endl;
    cout << "Yearly Amount     = " << yearlyAmount << endl;
    cout << "Interest Rate (%) = " << interestRate << endl;
    cout << endl;
}

void changeData (int& startingAge, int& numOfYears, double& lumpSumAmount, double& yearlyAmount, double& interestRate)
{
    cout << "Starting Age      => ";  cin >> startingAge;
    cout << "Number of Years   => ";  cin >> numOfYears;
    cout << "Lump Sum Amount   => ";  cin >> lumpSumAmount;
    cout << "Yearly Amount     => ";  cin >> yearlyAmount;
    cout << "Interest Rate (%) => ";  cin >> interestRate;
    cout << endl;
}

double getCashWithInterest (double cash, double interestRate)
{
    return cash + cash * interestRate / 100.0;
}

void displayAge (int age)
{
    cout.width(3);
    cout << age;
}

void displayCash (double cash)
{
    cout.width(15);
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << cash;
}

void displayOneLumpSumPlan (int startingAge, int numOfYears, double lumpSumAmount, double interestRate)
{
    cout << "Age  |    Lump Sum Plan" << endl;
    cout << "-----|-----------------" << endl;
    
    double cash = lumpSumAmount;
    int age = startingAge;

    while (age <= startingAge + numOfYears)
    {
        displayAge (age);
        cout << "  | ";

        displayCash (cash);
        cout << endl;

        cash = getCashWithInterest (cash, interestRate);
        age ++;
    }

    cout << endl;
}

double getYearlyAmountWithInterest (double& cash, double interestRate, double yearlyAmount)
{
    return cash = yearlyAmount + cash + cash * interestRate / 100.0;
}

void displayYearlyPlan (int startingAge, int numOfYears, double yearlyAmount, double interestRate)
{
    cout << "Age  |      Yearly Plan" << endl;
    cout << "-----|-----------------" << endl;
    
    double cash = yearlyAmount;
    int age = startingAge;

    while (age <= startingAge + numOfYears)
    {
        displayAge (age);
        cout << "  | ";

        displayCash (cash);
        cout << endl;

        getYearlyAmountWithInterest (cash, interestRate, yearlyAmount);
        age ++;
    }

    cout << endl;
}

void displayComparison (int startingAge, int numOfYears, double lumpSumAmount, double yearlyAmount, double interestRate)
{
    cout << "Age  |    Lump Sum Plan         Yearly Plan " << endl;
    cout << "-----|--------------------------------------" << endl;

    double cash = yearlyAmount;
    double cash_1 = lumpSumAmount;
    int age = startingAge;

    while (age <= startingAge + numOfYears)
    {
        displayAge (age);
        cout << "  | ";

        displayCash (cash_1);
        cout << "       ";

        displayCash (cash);
        cout << endl;

        cash_1 = getCashWithInterest (cash_1, interestRate);
        getYearlyAmountWithInterest (cash, interestRate, yearlyAmount);
        age ++;
    }

    cout << endl;

    if (cash < cash_1)
    {
        cout << "You are advised to choose the Lump Sum Plan!" << endl;
        cout << endl;
    }
    else if (cash_1 < cash)
    {
        cout << "You are advised to choose the Yearly Plan!" << endl;
        cout << endl;
    }
}
