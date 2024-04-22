#include<iostream>
#include<conio.h>

using namespace std;

int main() {
    int firstnum, lastnum, r, temp, sum = 0;

    // Input the range of numbers
    cout << "Enter your first number: ";
    cin >> firstnum;

    cout << "Enter the last number: ";
    cin >> lastnum;

    // Loop through the numbers in the specified range
    for (int i = firstnum; i <= lastnum; i++) {
        temp = i;
        // Calculate the sum of cubes of digits
        while (temp != 0) {
            r = temp % 10;
            sum = sum + r * r * r;
            temp = temp / 10;
        }
        // Check if the number is an Armstrong number
        if (sum == i) {
            cout << i << endl; // Print Armstrong number
        }
        sum = 0; // Reset sum for the next iteration
    }

    // Copyright information
    cout << "Code Copy Right: \nRafid Al Raiyan \nCSE 53rd \nLeading University";

    getch();
    return 0;
}

