#include<iostream>
using namespace std;


int check_pelindrome(int x)
{
   int rev=0,rem,temp=x;
    while(temp)
    {
        rem=temp%10;
        temp=temp/10;
        rev=rev*10+rem;

    }
    if (x==rev)
        cout<<"this is palindrome Number"<<endl;
    else
        cout<<"NOT palindrome"<<endl;
}
int main()
{
    int x,c;
    cin>>x;
    c=check_pelindrome(x);

}
