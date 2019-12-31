 #include<bits/stdc++.h>
 #include<math.h>
 using namespace std;
 int isArmstrong(int x)
 {
     int temp=x,digit=0,rem,sum=0;
     while(temp)
     {
         digit++;
         temp=temp/10;
     }
     temp=x;

     while(temp)
     {
       rem=temp%10;
       sum=sum+pow(rem,digit);
       temp=temp/10;
     }
     if(x==sum)
        return 1;
     else
        return 0;
 }


 int main()
 {
     int x,c;
     cin>>x;
     for(int i=1;i<=x;i++)
     {
         c=isArmstrong(i);
         if(c==1)
         {
             cout<<i<<" ";
         }
     }


 }













