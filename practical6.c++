#include <iostream>
using namespace std;

// Practical 6(a)
void reverseString(string &s)
{
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (i < (n / 2))
        {
            int temp = s[i];
            s[i] = s[n - i - 1];
            s[n - i - 1] = temp;
        }
    }
}

// Practical 6(b)
int count_characters(string &s)
{
    int count = 0;
    int i = 0;
    while (s[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

// Practical 6(c)
void CopyString(char source[], char destination[])
{
    int i = 0;
    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }
    while (destination[i] != '\0')
    {
        destination[i] = ' ';
        i++;
    }
}

// Practical 6(d)
void count_Vow_Con(char str[])
{
    int countVow = 0;
    int countCon = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            countVow++;
        }
        else if (str[i] != ' ')
        {
            countCon++;
        }
        i++;
    }
    cout << "Number of vowels: " << countVow << endl;
    cout << "Number of consonent: " << countCon << endl;
}
int main()
{
    char s1[] = "This is source";
    char s2[] = "This is destination";

    string s = "PIYUS";
    reverseString(s);
    cout << "Reversed string: " << s << endl;

    cout << "Number of characters in the string is : " << count_characters(s) << endl;

    cout << "s2 before copyString: " << s2 << endl;
    CopyString(s1, s2);
    cout << "s2 after copyString: " << s2 << endl;
    cout << endl;

    count_Vow_Con(s1);
    return 0;
}