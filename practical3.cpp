#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    for(int i =1; i<11; i++ )
    {
        cout<< i <<"in Octal         : "<< setbase(8)<<i <<
        "\t\t"<< i <<"in Decimal     : " << setbase(10) <<i <<
        "\t\t"<< i <<"in Hexadecimal : "<< setbase(16)<<i<<endl;
    }

}