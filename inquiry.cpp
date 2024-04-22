#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
    char pname[25];
    char add[30];
    int serialnum, age;

    cout << "Enter Serial Number: ";
    cin>> serialnum;

    cout << "Enter Patient Name: ";
    cin >> pname;

    cout << "Enter Patients Age: ";
    cin >> age;

    cout << "Enter Patients Address: ";
    cin >> add;

    cout << "\n";
    cout <<setw(20) << "Serial Number: "<<serialnum<<endl;
    cout <<setw(20) << "Patient Name: "<<pname<<endl;
    cout <<setw(20) << "Age: "<<age<<endl;
    cout <<setw(20) << "Address: "<<add;

    getch();
}
