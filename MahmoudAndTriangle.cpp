#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
    long long r,a[100000],i=0,s=0;
    cin>>r;
    while(i<r){
        cin>>a[i];
        //s=a[i]/2+s;
        i++;
    }
   sort(a,a+r);
   i=0;
   while(i+2<r){
       if(a[i+2]<(a[i]+a[i+1])){
           cout<<"YES";
           return 0;
       }
       i++;
   }
   if(i+2==r){
       cout<<"NO";
   }
}