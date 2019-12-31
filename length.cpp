#include<iostream>
using namespace std;
int main()
{
    string name1,name2;
    //cin>>name1>>name2;
    getline(cin,name1);
    getline(cin,name2);
    int l=name1.length();
    int m=name2.length();
    cout<<"Bigger string is :";
    if (l>m)
        cout<<name1<<endl;
    else if(l==m)
        cout<<"both are same"<<endl;
        else
            cout<<name2<<endl;

}
