#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n,s;
    double course[10],credit[10];
    double total_gpa=0,final_credit=0,CGPA;

    cin>>s;
    while(s--){
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
    //cout<<"credit : "<<total_credit<<endl;
    GPA=total_point/total_credit;
    printf("GPA: %.2f\n",GPA);
    cout<<endl;

    final_credit=final_credit+total_credit;
    total_gpa += total_point;


    }
    CGPA=total_gpa/final_credit;
    cout<<endl;
    printf("CGPA: %.2f\n",CGPA);




}

