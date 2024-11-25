#include <iostream>
#include <string>
using namespace std;

class Student
{
    int roll_no;
    string Name;
    string subjects[3];
    int max_marks[3];
    int min_marks[3];
    int obtained_marks[3];

public:
    SetData()
    {
        cout << "Enter Roll No : ";
        cin >> roll_no;
        cout << "Enter Name : ";
        cin >> Name;
        ;
        cout << "Enter name of the Subjects" << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << "subject " << i + 1 << " : ";
            cin >> subjects[i];

            cout << "Maximum Marks " << " : ";
            cin >> max_marks[i];

            cout << "Minimum Marks " << " : ";
            cin >> min_marks[i];

            cout << "Obtained Marks " << " : ";
            cin >> obtained_marks[i];
            cout << "================================================================" << endl;
        }
    }
    GetData()
    {
        cout << "Rollno : " << roll_no << endl;
        cout << "Name : " << Name << endl;

        for (int i = 0; i < 3; i++)
        {
            cout << "Subjects : " << subjects[i] << "  Maximum Marks/Minimum Marks: " << max_marks[i] << "/" << min_marks[i] << "  Obtained Marks : " << obtained_marks[i] << endl;
        }
    }
    int getRollNo()
    {
        return roll_no;
    }
};

int main()
{
    Student obj[3];
    for (int i = 0; i < 3; i++)
    {
        obj[i].SetData();
    }
    for (int i = 0; i < 3; i++)
    {
        obj[i].GetData();
    }

    
    int searchRollNo;
    cout << "\nEnter roll number of the student whose result you want to display: ";
    cin >> searchRollNo;

    bool found = false;
    for (int i = 0; i < 3; i++)
    {
        if (obj[i].getRollNo() == searchRollNo)
        {
            obj[i].GetData();
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "\nStudent with Roll Number " << searchRollNo << " not found.\n";
    }

    return 0;
}