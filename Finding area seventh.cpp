#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    double w,h,a,b,sq,pb,ph,cr,areaofrec,areaofellipse,areaofsquare,areaofperallelogram,areaofcircle;

    w = 10;
    h = 5;
    areaofrec = w*h;

    cout <<"The Area of Rectangle is: "<<areaofrec<<endl;

    a = 20;
    b = 10;
    areaofellipse = 3.1416 * a * b;

    cout <<"The Area of Ellipse is: "<<areaofellipse<<endl;

    sq = 10;
    areaofsquare = sq*sq;

    cout <<"The Area of Square is: "<<areaofsquare<<endl;

    pb = 20;
    ph = 30;
    areaofperallelogram = pb*ph;

    cout <<"The Area of Perallelogram is: "<<areaofperallelogram<<endl;

    cr = 24;
    areaofcircle = 3.1416*(cr*cr);

    cout <<"The Area of Circle is: "<<areaofcircle<<endl;

    getch();
}
