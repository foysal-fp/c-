#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    for(int i=0;i<n-1;i++)
    {
        k=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[k]>a[j])
               k=j;

        }
        int temp = a[k];
        a[k]=a[i];
        a[i]=temp;
    }
        for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
