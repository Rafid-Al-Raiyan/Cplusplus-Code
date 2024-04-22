#include <iostream>

int main() {
    using namespace std;

    cout << "Enter a string: ";
    string inputString;
    getline(cin, inputString);

    int length = inputString.length();
    cout << "Length of the string: " << length << endl;

    string reversedString = inputString;
    for (int i = 0, j = length - 1; i < j; ++i, --j) {
        swap(reversedString[i], reversedString[j]);
    }
    cout << "Reversed string: " << reversedString << endl;

    bool hasRepeated = false;
    for (int i = 0; i < length; ++i) {
        char currentChar = inputString[i];
        bool foundDuplicate = false;
        for (int j = i + 1; j < length; ++j) {
            if (inputString[j] == currentChar) {
                foundDuplicate = true;
                break;
            }
        }
        if (foundDuplicate) {
            hasRepeated = true;
            break;
        }
    }

    if (hasRepeated) {
        cout << "The string has repeated characters:"<< endl;
    } else {
        cout << "The string does not have repeated characters." << endl;
    }

    return 0;
}
