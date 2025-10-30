#include<iostream>
#include<cctype>
using namespace std;

int main ()
{
    string s;
    cout << "Enter input: ";
    cin >> s;


    if (!isalpha(s[0]) && s[0] != '_')
    {
        cout << "Not an identifier" << endl;
        return 0;
    }


    for (int i = 1; i < s.length(); i++)
    {
        if (!isalnum(s[i]) && s[i] != '_')
        {
            cout << "Not an identifier" << endl;
            return 0;
        }
    }

    cout << "Valid Identifier" << endl;
}

