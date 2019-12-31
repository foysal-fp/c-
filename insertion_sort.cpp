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
    int temp,ptr;
    for(int i=1;i<n;i++)
    {
        temp=a[i];
        ptr=i-1;
        while(temp<a[ptr] && ptr!= -1)
        {
            a[ptr+1]=a[ptr];
            ptr--;
        }
        a[ptr+1]=temp;
    }
        for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}
