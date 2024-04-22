#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num,r,temp,rev=0,sum=0;

    cout<<"Enter your ID number: ";
    cin>>num;

    temp = num;

    while(temp != 0)
    {
        r = temp % 10;
        rev = (rev*10) + r;
        temp = temp/10;
    }

    if(num == rev)
        cout<<"Your ID is palindrome number. "<<endl;
    else
        cout<<"Your ID is not a palindrome number."<<endl;

    temp = num;

      while(temp != 0)
    {
        r = temp % 10;
        sum = sum+ r*r*r;
        temp = temp/10;
    }

    if(sum == num)
        cout<<"Your ID is Armstrong number. "<<endl;
    else
        cout<<"Your ID is not Armstrong number."<<endl;

    cout<<"\n\n===Code copyright=== \nRafid Al Raiyan \nCSE 53rd \nLeading University";

    getch();
}
