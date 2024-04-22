#include<iostream>
#include<conio.h>

using namespace std;

int main()

{
    int num,r,temp,rev=0,sum=0;

    cout<<"Enter your phone number: ";
    cin>>num;

    temp = num;

    while(temp != 0)
    {
        r = temp % 10;
        rev = (rev*10) + r;
        temp = temp/10;
    }

     cout<<"The reverse of the digits of your phone number is: "<<rev<<endl;

     temp = num;

      while(temp != 0)
    {
        r = temp % 10;
        sum = sum+ r;
        temp = temp/10;
    }

    cout<<"The sum of the digits of your phone number is: "<<sum;



    getch();
}
