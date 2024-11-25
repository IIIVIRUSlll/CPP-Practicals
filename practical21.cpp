#include <iostream>
using namespace std;

class Calculate{
    
    public:
    static int area (int length , int width){
        return length*width;
    }
    static float area(float base , float height){
        return (0.5*(base * height));
    }
    static int area(int radius){
        return radius*radius;
    }
};

int main(){

    cout << "Area of Rectangle is : " << Calculate::area(3,5) << " cm square" << endl;
    cout << "Area of Triangle is : " << Calculate::area(3,7) << " cm square"<< endl;
    cout << "Area of Circle is : " << Calculate::area(3) <<" cm square" << endl;
}