#include <iostream>
#include <math.h>
using namespace std;

int pattern1()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (j < 4 - i || j >= 7 - (4 - i))
            {
                cout << (char)('A' + j);
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int pattern2()
{
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            if (j <= i)
            {
                cout << j;
            }
        }
        cout << endl;
    }
}

int pattern3()
{
    int m = 2;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        m--;
        cout << endl;
    }
}

int pattern4()
{
    for (int i = 1; i < 5; i++)
    {
        cout << pow(11, i) << endl;
    }
}

int main()
{
    pattern1();
    cout << endl;
    pattern2();
    cout << endl;
    pattern3();
    cout << endl;
    pattern4();

    return 0;
}