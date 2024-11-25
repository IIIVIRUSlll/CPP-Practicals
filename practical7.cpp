#include <iostream>
using namespace std;
class Student
{
private:
    int RollNo;
    string Name;
    string subjects[3];
    int Max_Marks;
    int Min_Marks;
    int obtained_Marks[3];

public:
    Student()
    {
        cout << "Enter Roll No : ";
        cin >> RollNo;
        cout << "\nEnter Name : ";
        cin >> Name;
    }
    void setData(string sub1, string sub2, string sub3)
    {
        subjects[0] = sub1;
        subjects[1] = sub2;
        subjects[2] = sub3;
        cout << "Maximum Marks "<< endl;
        cin >> Max_Marks;
        cout << "Minimum Marks: "<< endl;
        cin >> Min_Marks;
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter obtained marks for subject " << subjects[i] << ": " << endl;
            cin >> obtained_Marks[i];
        }
    }
    void getData()
    {
        cout << "\nStudent Roll Number: " << RollNo << endl;
        cout << "Student Name: " << Name << endl;
        cout << "Maximum Marks " << Max_Marks << endl;
        cout << "Minimum Marks: " << Min_Marks << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << "\nSubject: " << subjects[i] << endl;
            cout << "Obtained Marks: " << obtained_Marks[i] << endl;
        }
    }
    ~Student(){}
};

int main()
{
    Student s1;
    s1.setData("Maths", "DBMS", "C++");
    s1.getData();
    return 0;
}