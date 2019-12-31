#include<iostream>
using namespace std;

int gcd(int a,int b)
{
    if (a%b==0)
        return b;
    else if (b==0)
        return a;
    else
        return gcd(b,a%b);

}
int main()
{
    int x,y,g;
    cin>>x>>y;
    g=gcd(x,y);
    cout<<"GCD is : "<<g<<endl;
    cout<<"LCD is : "<<(x*y)/g;



}

