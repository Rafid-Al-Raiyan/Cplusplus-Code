#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter first Number: ";
    cin >> num1;

    cout << "Enter second Number: ";
    cin >> num2;

    int sum = num1 + num2;
    cout << "The addition is: "<< sum;
    cout<<endl;

    int sub = num1 - num2;
    cout << "The substraction is: "<< sub;
    cout<<endl;

    int mul = num1 * num2;
    cout << "The multiplication is: "<< mul;
    cout<<endl;

    int div = num2/num1;
    cout << "The division is: "<< div;
    cout<<endl;

    int rem = num2%num1;
    cout << "The rem is: "<< rem;
    cout<<endl;

    getch();
}
