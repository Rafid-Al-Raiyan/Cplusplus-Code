#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    double farenh, celsi;

    cout <<"Enter Farenhiet: " ;
    cin>>farenh;

    celsi = (farenh - 32)/1.8;

    cout<< "Temperature in Celsius: " <<celsi;

    getch();
}
