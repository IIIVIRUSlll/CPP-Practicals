#include <iostream>
using namespace std;

int AddMatrix(int arr1[3][3], int arr2[3][3])
{
    int Add[3][3];
    cout << "Addition of Matrix is : \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Add[i][j] = arr1[i][j] + arr2[i][j];
            cout << Add[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

int SubMatrix(int arr1[3][3], int arr2[3][3])
{
    int Sub[3][3];
    cout << "Subtraction of Matrix is : \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Sub[i][j] = arr1[i][j] - arr2[i][j];
            cout << Sub[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

int ProductMatrix(int arr1[3][3], int arr2[3][3])
{
    cout << "Multiplication of Matrix is : \n";
    int product[3][3];
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 3; ++k)
            {
                product[i][j] += arr1[i][k] * arr2[k][j];
            }
        cout << product[i][j] << " ";    
        }
        cout << endl;
    }
    return 0;
}

int main()
{
    int Matrix1[3][3];
    int Matrix2[3][3];

    cout << "Enter the values for Matrix1" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter value of Matrix1 for index : " << i + 1 << "," << j + 1 << " = ";
            cin >> Matrix1[i][j];
        }
    }
    cout << "\n";
    
    cout << "Enter the values for Matrix2" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter value of Matrix2 for index : " << i + 1 << "," << j + 1 << " = ";
            cin >> Matrix2[i][j];
        }
    }

    AddMatrix(Matrix1, Matrix2);
    SubMatrix(Matrix1, Matrix2);
    ProductMatrix(Matrix1, Matrix2);
}
