#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

    int year;

    cout<<"Enter the year: ";
    cin>> year;

    if(year%4==0 && year%100!=0)
    {
        cout<<"The year is Leap Year.";
    }
    else if (year%400==0)
    {
        cout<<"Leap Year.";
    }
    else
    {
        cout<<"The Year is not Leap Year.";
    }


    getch();
}
