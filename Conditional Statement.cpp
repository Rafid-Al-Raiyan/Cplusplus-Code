#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int num1, num2;

    num1 = 10;
    num2 = 5;

    // Conditional Statements
    if (num1 > num2) {
        cout << "num1 is greater than num2" << endl;
    } else if (num1 < num2) {
        cout << "num2 is greater than num1" << endl;
    } else {
        cout << "num1 is equal to num2" << endl;
    }

    getch();
    return 0;
}
