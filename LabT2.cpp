#include <iostream>
using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || c == '=');
}

int main() {
    char input;
    cout << "Enter a character: ";
    cin >> input;

    if (isOperator(input))
        cout << "Operator: " << input << endl;
    else
        cout << "Not an Operator" << endl;

    return 0;
}

