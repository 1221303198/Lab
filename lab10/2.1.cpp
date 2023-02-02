#include <iostream>
using namespace std;

void getData (int noOfStudents, int id [], double marks []);
void display (int noOfStudents, int id [], double marks []);
void displayid (int noOfStudents, int id []);
void displaymarks (int noOfStudents, double marks []);
double getAverageMarks (int noOfStudents, double marks []);
double getFailureRate (int noOfStudents, double marks []);
int getRecordNoOfLowestMarks (int noOfStudents, double marks []);
int getRecordNoWithId (int noOfStudents, int id [], int targetid);

int main()
{
    const int noOfStudents = 5;

    int id [noOfStudents];
    double marks [noOfStudents];

    getData (noOfStudents, id, marks);

    display (noOfStudents, id, marks);

    double average = getAverageMarks (noOfStudents, marks);

    cout << "Average = " << average << endl << endl;

    double failureRate = getFailureRate (noOfStudents, marks);

    cout << "Failure Rate = " << failureRate << " %" << endl << endl;

    int recordLowest = getRecordNoOfLowestMarks (noOfStudents, marks);
    cout << "Record of Lowest Marks => " << endl;
    cout << "Record No = " << recordLowest << endl
         << " id = " << id[recordLowest] << endl
         << " Marks = " << marks[recordLowest] << endl << endl;

    cout << "Enter id to search marks => ";
    int targetid;
    cin >> targetid;

    int recordNo = getRecordNoWithId(noOfStudents, id, targetid);

    if (recordNo != -1)
    {
        cout << "Marks = " << marks[recordNo] << endl;
    }
    else
    {
        cout << "Marks not found!" << endl;
    }

    return 0;
}

void getData (int noOfStudents, int id [], double marks [])
{
    
    for (int i = 0; i < noOfStudents; ++i)
    {
        cout << "Student " << noOfStudents << ":" << endl;
        cout << "    ID => ";
        cin >> id [i];
        cout << endl;
        cout << " Marks => ";
        cin >> marks [i];
        cout << endl;
    }

}

void display (int noOfStudents, int id [], double marks [])
{
    cout << "   ID        Marks   " << endl;
    cout << "--------  -----------" << endl;

    for (int i = 0; i < noOfStudents; ++i)
    {
        displayid (noOfStudents, id);
        displaymarks (noOfStudents, marks);
        cout << endl;
    }
}

void displayid (int noOfStudents, int id [])
{
    for (int i = 0; i < noOfStudents; ++i)
    {
        cout.width(8);
        cout << id [i];
    }
}

void displaymarks (int noOfStudents, double marks [])
{
    for (int i = 0; i < noOfStudents; ++i)
    {
        cout.width(11);
        cout.precision(2);
        cout.setf(ios::fixed);
        cout << marks [i];
    }
}

double getAverageMarks (int noOfStudents, double marks [])
{
    double sum = 0.0;
    
    for (int i = 0; i < noOfStudents; ++i)
    {
        sum = sum + marks [i];
    }

    double average = sum / noOfStudents;

    return average;
}

double getFailureRate (int noOfStudents, double marks [])
{
    double noOfFailure = 0.0;
    double failurerate;

    for (int i = 0; i < noOfStudents; ++i)
    {
        if (marks[i] < 50.0)
        {
            noOfFailure = noOfFailure + 1;
        }
    }

    failurerate = (noOfFailure / noOfStudents) * 100;

    return failurerate;
}

int getRecordNoOfLowestMarks (int noOfStudents, double marks [])
{
    int recordNoOfLowest;
    double lowestmark = 100.00;

    for (int i = 0; i < noOfStudents; ++i)
    {
        if (marks [i] < lowestmark)
        {
            recordNoOfLowest = i;
            // here
        }
    }

    return recordNoOfLowest;

}

int getRecordNoWithId (int noOfStudents, int id [], int targetid)
{
    int recordNo;

    for (int i = 0; i < noOfStudents; ++i)
    {
        if (id [i] == targetid)
        {
            recordNo = i;
        }
    }

    return recordNo;
}