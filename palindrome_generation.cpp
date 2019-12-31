#include<iostream>
using namespace std;
int main()
{
    int s,e,temp,rem;
    cin>>s>>e;
    for( int i=s;i<=e;i++)
    {
        int reverse_number = 0;
        temp=i;
        while(temp)
        {
            rem=temp%10;
            temp=temp/10;
            reverse_number=reverse_number*10+rem;
        }
        if(i==reverse_number)
            cout<<i<<" ";
    }
}
