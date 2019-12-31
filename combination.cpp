#include <iostream>
using namespace std;

int fact(int x)
{
    if(x==0)
        return 1;
    else
        return x*fact(x-1);
}

int computation(int n ,int r)
{
    return fact(n)/(fact(r)*fact(n-r));

}
int main()
{
    int n,r,c;
    cin>>n>>r;
    c=computation(n,r);
    cout<<c;
}
