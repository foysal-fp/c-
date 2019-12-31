#include<iostream>
using namespace std;

int fact(int x)
{
    if (x==0)
        return 1;
    else
        return x*fact(x-1);
}

int main()
{
    int a,l;
    cin>>a;
    l=fact(a);
    cout<<l;
}
