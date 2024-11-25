#include <iostream>
#include <math.h>
using namespace std;

// Pattern 1 using for loop
int pattern11()
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

// Pattern 1 using for while loop
int pattern12()
{
    int i = 0;
    while (i < 4)
    {
        int j = 0;
        while (j < 7)
        {
            if (j < (4 - i) || j >= 7 - (4 - i))
            {
                cout << (char)('A' + j);
            }
            else
            {
                cout << " ";
            }
            j++;
        }
        i++;
        cout << endl;
    }
}

// Pattern 1 using for do while loop
int pattern13()
{
    int i = 0;
    do
    {
        int j = 0;
        do
        {
            if (j < (4 - i) || j >= 7 - (4 - i))
            {
                cout << (char)('A' + j);
            }
            else
            {
                cout << " ";
            }
            j++;
        } while (j < 7);
        i++;
        cout << endl;
    } while (i < 4);
}

// Pattern 2 using for loop
int pattern21()
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

// Pattern 2 using while loop
int pattern22()
{
    int i = 1;
    while (i < 5)
    {
        int j = 1;
        while (j < 5)
        {
            if (j <= i)
            {
                cout << j;
            }
            j++;
        }
        i++;
        cout << endl;
    }
}

// Pattern 2 using do while loop
int pattern23()
{
    int i = 1;
    do
    {
        int j = 1;
        do
        {
            if (j <= i)
            {
                cout << j;
            }
            j++;
        } while (j < 5);

        i++;
        cout << endl;
    } while (i < 5);
}

// Pattern 3 using For loop
int pattern31()
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

// Pattern 3 using While Loop
int pattern32()
{
    int m = 2;
    int i = 1;
    while (i <= 3)
    {
        int j = 1;
        while (j <= m)
        {
            cout << " ";
            j++;
        }

        int k = 1;
        while (k <= i)
        {
            cout << "* ";
            k++;
        }
        m--;
        i++;
        cout << endl;
    }
}

// Pattern 3 using Do While Loop
int pattern33()
{
    int i = 0;
    int m = 2;
    do
    {
        int k = 1;
        int j = 1;
        do
        {
            cout << " ";
            j++;
        } while (j <= m);

        do
        {
            cout << "* ";
            k++;
        } while (k <= i);

        m--;
        i++;
        cout << endl;
    } while (i <= 3);
}

// Pattern 4 using For loop
int pattern41()
{
    for (int i = 1; i < 5; i++)
    {
        cout << pow(11, i) << endl;
    }
}

// Pattern 4 using while loop
int pattern42()
{
    int i = 1;
    while (i < 5)
    {
        cout << pow(11, i) << endl;
        i++;
    }
}

// Pattern 4 using Do While loop
int pattern43()
{
    int i = 1;
    do
    {
        cout << pow(11, i) << endl;
        i++;
    } while (i < 5);
}

int main()
{
    cout << "Enter a number to get results" << endl;
    cout << "11 (First Pattern) in For Loop " << endl;
    cout << "12 (First Pattern) in While Loop " << endl;
    cout << "13 (First Pattern) in Do While Loop " << endl;
    cout << "21 (Second Pattern) in For Loop " << endl;
    cout << "22 (Second Pattern) in While Loop " << endl;
    cout << "23 (Second Pattern) in Do While Loop " << endl;
    cout << "31 (Third Pattern) in For Loop " << endl;
    cout << "32 (Third Pattern) in While Loop " << endl;
    cout << "33 (Third Pattern) in Do While Loop " << endl;
    cout << "41 (Fourth Pattern) in For Loop " << endl;
    cout << "42 (Fourth Pattern) in While Loop " << endl;
    cout << "43 (Fourth Pattern) in Do While Loop " << endl;
    int caseexpression;
    cin >> caseexpression;
    switch (caseexpression)
    {
    case 11:
        pattern11();
        break;
    case 12:
        pattern12();
        break;
    case 13:
        pattern13();
        break;
    case 21:
        pattern21();
        break;
    case 22:
        pattern22();
        break;
    case 23:
        pattern23();
        break;
    case 31:
        pattern31();
        break;
    case 32:
        pattern32();
        break;
    case 33:
        pattern33();
        break;
    case 41:
        pattern41();
        break;
    case 42:
        pattern42();
        break;
    case 43:
        pattern43();
        break;

    default:
        cout << "Enter a valid number";
        break;
    }
}