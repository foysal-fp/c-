#include <iostream>

using namespace std;

int main()
{
    int n;
    double course[10],credit[10];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>course[i]>>credit[i];

    }

    double total_credit=0,total_point=0,GPA;
    for(int i=0;i<n;i++)
    {
    total_credit= total_credit+credit[i];
    total_point= total_point+ course[i]*credit[i];
    }
    cout<<"credit : "<<total_credit<<endl;
    GPA=total_point/total_credit;
    cout<<"GPA : "<<GPA<<endl;
}
