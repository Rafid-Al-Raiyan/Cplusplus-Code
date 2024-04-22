#include<iostream>
#include<conio.h>

using namespace std;

int main()

{
    int i,j,k,l,m,n,o,p,q,r,num1,num2,num3,num4,num5,num6,num7,num8,num9,num10, count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0,count10=0;

    cout<<"Enter the first number which you want to check: ";
    cin>>num1;

    for(i=2; i<num1; i++)
    {
        if(num1%i==0)
        {
            count1++;
            break;
        }
    }
    if(count1 ==0)
    {
        cout<<"Prime Number"<<endl;
    }
    else
    {
        cout<<"Not prime number"<<endl;
    }
     cout<<"Enter the second number which you want to check: ";
    cin>>num2;

    for(j=2; j<num2; j++)
    {
        if(num2%j==0)
        {
            count2++;
            break;
        }
    }
    if(count2 ==0)
    {
        cout<<"Prime Number"<<endl;
    }
    else
    {
        cout<<"Not prime number"<<endl;
    }
     cout<<"Enter the third number which you want to check: ";
    cin>>num3;

    for(k=2; k<num3; k++)
    {
        if(num3%k==0)
        {
            count3++;
            break;
        }
    }
    if(count3 ==0)
    {
        cout<<"Prime Number"<<endl;
    }
    else
    {
        cout<<"Not prime number"<<endl;
    }
     cout<<"Enter the fourth number which you want to check: ";
    cin>>num4;

    for(l=2; l<num4; l++)
    {
        if(num4%l==0)
        {
            count4++;
            break;
        }
    }
    if(count4 ==0)
    {
        cout<<"Prime Number"<<endl;
    }
    else
    {
        cout<<"Not prime number"<<endl;
    }
     cout<<"Enter the fifth number which you want to check: ";
    cin>>num5;

    for(m=2; m<num5; m++)
    {
        if(num5%m==0)
        {
            count5++;
            break;
        }
    }
    if(count5 ==0)
    {
        cout<<"Prime Number"<<endl;
    }
    else
    {
        cout<<"Not prime number"<<endl;
    }
     cout<<"Enter the sixth number which you want to check: ";
    cin>>num6;

    for(n=2; n<num6; n++)
    {
        if(num6%n==0)
        {
            count6++;
            break;
        }
    }
    if(count6 ==0)
    {
        cout<<"Prime Number"<<endl;
    }
    else
    {
        cout<<"Not prime number"<<endl;
    }
     cout<<"Enter the seventh number which you want to check: ";
    cin>>num7;

    for(i=2; o<num7; o++)
    {
        if(num7%o==0)
        {
            count7++;
            break;
        }
    }
    if(count7 ==0)
    {
        cout<<"Prime Number"<<endl;
    }
    else
    {
        cout<<"Not prime number"<<endl;
    }
     cout<<"Enter the eighth number which you want to check: ";
    cin>>num8;

    for(p=2; p<num8; p++)
    {
        if(num8%p==0)
        {
            count8++;
            break;
        }
    }
    if(count8 ==0)
    {
        cout<<"Prime Number"<<endl;
    }
    else
    {
        cout<<"Not prime number"<<endl;
    }
     cout<<"Enter the ninth number which you want to check: ";
    cin>>num9;

    for(q=2; q<num9; q++)
    {
        if(num9%q==0)
        {
            count9++;
            break;
        }
    }
    if(count9 ==0)
    {
        cout<<"Prime Number"<<endl;
    }
    else
    {
        cout<<"Not prime number"<<endl;
    }
     cout<<"Enter the tenth number which you want to check: ";
    cin>>num10;

    for(r=2; r<num10; r++)
    {
        if(num10%r==0)
        {
            count10++;
            break;
        }
    }
    if(count10 ==0)
    {
        cout<<"Prime Number"<<endl;
    }
    else
    {
        cout<<"Not prime number"<<endl;
    }

    getch();
}
