#include <iostream>
#include <regex>

using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    regex pattern("^A*B+$");
    if (regex_match(input, pattern)) {
        cout << "The string matches the regular expression A*B+." << endl;
    } else {
        cout << "The string does not match the regular expression A*B+." << endl;
    }

    return 0;
}
