#include<iostream>
#include<math.h>
using namespace std;

long long value(int x,int n)
{
    if(n>0)
        return pow(x,n);
   else if(n==0)
    return 1;
   else
    return 0;
}

int main()
{
    int x,n,c;
    cin>>x>>n;
    c=value(x,n);
    cout<<c;
}

