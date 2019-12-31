#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
  sort(a,a+n);
  cout<<"search a number : ";
  int s ;
  cin>>s;

  int first=0,last=n-1,mid;

  while(first<=last)
  {
      mid=(first+last)/2;
      if(s>a[mid])
      first= mid+1;
      else if (s==a[mid]){
      cout<<"found"<<endl;
      break;}
      else
        last=mid-1;


  }




}
