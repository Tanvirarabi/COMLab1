#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a line: ";
    getline(cin, input);

    if (input.substr(0, 2) == "//")
        cout << "Single Line Comment" << endl;
    else if (input.substr(0, 2) == "/*" && input.substr(input.length() - 2) == "*/")
        cout << "Multi-line Comment" << endl;
    else
        cout << "Not a Comment" << endl;

    return 0;
}

