#include <iostream>
#include <string>

using namespace std;

int main()
{
    string firstName;
    string lastName;

    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your second name: ";
    cin >> lastName;


    cout << "The full name is: " << firstName << " " << lastName << endl;

    return 0;
}

