#include <iostream>
using namespace std;
class Operation
{

public:
    static void swap(int &x, int &y)
    {
        int temp = x;
        x = y;
        y = temp;
    }
    static void swap(float &x, float &y)
    {
        float temp = x;
        x = y;
        y = temp;
    }
};

int main()
{
    int a = 5, b = 10;
    float c = 4.5, d = 9.5;
    cout << "Values before swap:\n a = " << a << "\t\tb = " << b << "\n c = " << c << "\t d = " << d << endl;
    Operation::swap(a, b);
    Operation::swap(c, d);
    cout << "Values after swap:\n a = " << a << "\t\t b = " << b << "\n c = " << c << "\t d = " << d << endl;
    return 0;
}