#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],even_sum=0,odd_sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        if (a[i]%2==0)
            even_sum+=a[i];
    }
    for(int i=0; i<n; i++)
    {
        if (a[i]%2!=0)
            odd_sum+=a[i];
    }
    cout<<"EVEN_SUMATION : "<<even_sum<<endl;
    cout<<"ODD_SUMATION : "<<odd_sum<<endl;

}
