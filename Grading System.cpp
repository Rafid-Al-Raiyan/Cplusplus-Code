#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

    int mark;

    cout<<"Enter the Mark of the subject: ";
    cin>> mark;

    if (100<=mark || mark>= 80)
    {
        cout<<"A+";
    }
    else if (79<=mark || mark >=75)
    {
        cout<<"A";
    }
    else if (74<=mark || mark >=70)
    {
        cout<<"A-";
    }
    else if (69<=mark || mark >=65)
    {
        cout<<"B+";
    }
    else if (64<=mark || mark >=60)
    {
        cout<<"B";
    }
    else if (59<=mark || mark >=55)
    {
        cout<<"B-";
    }
    else if (54<=mark || mark >=50)
    {
        cout<<"C+";
    }
    else if (49<=mark || mark >=45)
    {
        cout<<"C";
    }
    else if (44<=mark || mark >=40)
    {
        cout<<"D";
    }
    else
    {
        cout<<"F";
    }

    getch();
}

