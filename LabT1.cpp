#include <iostream>
#include <cctype>
using namespace std;

bool isNumericConstant(char input[]) {
    int i = 0;
    while (input[i] != '\0') {
        if (!isdigit(input[i]))
            return false;
        i++;
    }
    return true;
}

int main() {
    char input[100];  // define a character array
    cout << "Enter input: ";
    cin >> input;

    if (isNumericConstant(input))
        cout << "Numeric Constant" << endl;
    else
        cout << "Not Numeric Constant" << endl;

    return 0;
}

