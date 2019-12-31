#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    long int n,l;
    cin>>n;
    l=str.size();
    long int c=0,r=0;
    if(n>=l)
    {
        for(int i=0; i<l; i++)
        {
            if(str[i]=='a')
                c++;
        }
       long int rem=n%l;
      long int div=n/l;
        for(int i=0;i<rem;i++)
        {
            if(str[i]=='a')
            r++;

        }
        cout<<(div*c)+r;
    }
    else
    {
        int d=0;
        for(int i=0; i<l; i++)
        {
            if(str[i]=='a')
                d++;
        }
        cout<<d;
    }




}

