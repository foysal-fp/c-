#include<iostream>
using namespace std;

int leap_year(int y)
{
    if(y%4==0 && y%100!=0 || y%400==0)
        return 1;
    else
        return 0;
}
int main()
{
    int y,c;
    cin>>y;
    c=leap_year(y);
    if(c==1)
        cout<<y<< " Is Leap Year";
    else
        cout<<"NOT leap year";
}
