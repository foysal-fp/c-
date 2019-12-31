#include<iostream>
using namespace std;
int main()
{
    int x,rem;
    cin>>x;
    cout<<"reverse of  "<<x <<" is  : " ;
    while(x)
    {
        rem=x%10;
        x=x/10;
        cout<<rem;
    }
}
