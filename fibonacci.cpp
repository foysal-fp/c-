#include <iostream>
using namespace std;
int main()
{
    int a,b,limit,fib=0;
    cout<<"Enter two Number : ";
    cin>>a>>b;
    cout<<"limit: ";
    cin>>limit;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<limit;i++)
    {
        fib=a+b;
        a=b;
        b=fib;

        cout<<fib<<" ";

    }

}
