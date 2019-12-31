#include<iostream>
using namespace std;
int main()
{
    char operat;
    cout<<"Enter (+,-,*,/) operator : "<<endl;
    cin>>operat;
    cout<<"Enter two numbers : ";
    int x,y;
    cin>>x>>y;
    switch(operat)
    {
    case '+' :
        cout<<x<<" + "<<y<<" = "<<x+y;
        break;
     case '-' :
        cout<<x<<" - "<<y<<" = "<<x-y;
        break;
    case '*' :
        cout<<x<<" * "<<y<<" = "<<x*y;
        break;
    case '/' :
        cout<<x<<" / "<<y<<" = "<<x/y;
        break;
    }
}
