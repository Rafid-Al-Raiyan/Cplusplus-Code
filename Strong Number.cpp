#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num,sum=0,rem,temp,fact;

    cout<<"Enter any number: ";
    cin>>num;
    temp = num;

    while(temp!= 0)
    {
        rem = temp%10;

        fact=1;
        for(int i=1;i<=rem;i++)
        {
            fact = fact*i;
        }
        sum = sum + fact;
        temp = temp/10;
    }
    if(sum==num)
    {
        cout<<"This is a strong number.";
    }

    else
    {
        cout<<"The number is not a strong number.";
    }

    getch();
}

