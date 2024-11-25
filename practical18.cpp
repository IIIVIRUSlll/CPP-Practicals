#include <iostream>
using namespace std;

struct student
{
    string name;
    int roll_no;
    string subject[3];
    int marks[3];
    int SetData()
    {
        cout << "Enter the name of the student : " << endl;
        cin >> name;
        cout << "Enter the Roll No of the student : " << endl;
        cin >> roll_no;

        for (int i = 0; i < 3; i++)
        {
            cout << "Enter the Name of the Subject " << i + 1 << " : " << endl;
            cin >> subject[i];
            cout << "Enter the Marks of the Subject : " << i + 1 << " : " << endl;
            cin >> marks[i];
        }
    }
    int GetData(){
        cout << "Name of the Student : "<< name << endl;
        cout << "Roll No of the Student : "<< roll_no << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << "Subject and their Marks : " << subject[i] <<"  " << marks[i]<< endl;
        }
    }
};

int main()
{
    student obj;
    obj.SetData();
    obj.GetData();
}