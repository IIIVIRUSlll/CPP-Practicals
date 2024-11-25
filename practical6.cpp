#include <iostream>
using namespace std;

int StringLength(char str[50])
{
    int length = 0;
    while(str[length] != '\0')
    {
        length++;
    }
    return length;
}

int ReverseString(char str[100])
{
    int length = StringLength(str);
    for(int i = 0; i<length/2; i++)
    {
        char temp = str[i];
        str[i] = str[length-i-1];
        str[length-i-1] = temp;
    }
    cout << str;
    return 0;
}

int CopyString(char str[100], char copystr[100])
{
    int len = StringLength(str);
    for(int i = 0; i<=len; i++)
    {
        copystr[i] = str[i];
    }
    cout << copystr;
}

int main()
{
    char _copystring[100];
    char _string[100];
    
    cout <<"Enter a string" <<endl;
    cin >> _string;
    
    cout << "Enter another string to copy the first string with this string : " << endl;
    cin >> _copystring;

    cout <<"Reverse of the given string is : " << ReverseString(_string) <<endl ;
    
    //cout<< "Length of the string is : " << StringLength(_string) <<endl ;
    
    //cout <<"Copy of the given string is : " << CopyString(_string, _copystring) <<endl ;

}