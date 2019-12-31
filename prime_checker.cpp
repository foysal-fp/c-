#include<bits/stdc++.h>
using namespace std;

int isPrime(int x)
{
    int limit=sqrt(x+1);
    if(x<=1)
        return 0;
    for(int i=2;i<=limit;i++)
        if(x%i==0)
        return 0;
    return 1;

}
int main()
{
    int x,c;
    cin>>x;
    c=isPrime(x);
    if(c==0)
        cout<<"NOT PRIME";
    else
        cout<<"prime";
}
