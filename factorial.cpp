#include<iostream>
using namespace std;
int main(){
    int f,fact=1;
    cout<<"which number are you want to calculate as factorial : ";
    cin>> f;



    for(int i=f;i>1;i--){
        fact=fact*i;
    }
    cout<<"factiorial of "<<f<<" is : "<<fact;



}
