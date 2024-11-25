#include <iostream>
using namespace std;

class polar{
    private:
    float radius;
    float angle;

    public:
    polar(float radius = 24, float angle = 45){
        this->radius = radius;
        this->angle = angle;
        cout << "Parameterised constructor";
    }

    polar(const polar &obj){
        radius = obj.radius;
        angle = obj.angle; 
        cout << "Copy constructor";
    }

    void display(){
        cout << "Radius : " << radius << "   Angle : " << angle << endl; 
    }
    ~polar();

};

polar :: ~polar(){}

int main(){

    polar obj1;
    obj1.display();

    polar obj2(23.3,10);
    obj2.display();
    
    polar obj3(obj1);
    obj3.display();
}