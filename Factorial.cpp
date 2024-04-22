#include<iostream>
#include<conio.h>

using namespace std;

int main()
{

    int i, fact1 =1,fact2 =1,fact3 =1,fact4 =1,fact5 =1, n;

    cout<<"Enter the first number: ";
    cin>>n;

    for (i=1; i<=n; i++)
    {
        fact1 = fact1*i;
    }

    cout<<fact1<<endl;

     cout<<"Enter the second number: ";
    cin>>n;

    for (i=1; i<=n; i++)
    {
        fact2 = fact2*i;
    }

    cout<<fact2<<endl;

     cout<<"Enter the third number: ";
    cin>>n;

    for (i=1; i<=n; i++)
    {
        fact3 = fact3*i;
    }

    cout<<fact3<<endl;

     cout<<"Enter fourth number: ";
    cin>>n;

    for (i=1; i<=n; i++)
    {
        fact4 = fact4*i;
    }

    cout<<fact4<<endl;

     cout<<"Enter fifth number: ";
    cin>>n;

    for (i=1; i<=n; i++)
    {
        fact5 = fact5*i;
    }

    cout<<fact5;

    getch();
}
