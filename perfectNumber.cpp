#include<iostream>
using namespace std;

int isParfectNumber(int x)
{
    int sum=0,temp=x;
    for(int i=1;i<x;i++)
    {
        if(temp%i==0)
            sum=sum+i;

    }
    if(x==sum)
        return 1;
    else
        return 0;
}

int main()
{

    int x,c;
    cin>>x;
    for(int i=1;i<=x;i++){
    c=isParfectNumber(i);
    if(c==1)
        cout<<i<<endl;
    }


}
