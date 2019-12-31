#include<iostream>
using namespace std;

int fact(int x)
{
    if (x==0)
        return 1;
    else
        return x*fact(x-1);
}

int permutation(int n,int r)
{
    return fact(n)/fact(n-r);
}
int main()
{
    int n,r,p;
    cin>>n>>r;
    p=permutation(n,r);
    cout<<p;
}
