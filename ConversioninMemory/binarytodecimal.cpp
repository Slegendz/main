#include<iostream>
using namespace std;

int binarytodecimal(int n){
    int ans=0;
    int x=1;

    while(n>0){
     int z=n%10;
     ans+=z*x;
     x*=2;
     n=n/10;
}
return ans;
}
int main(){
    int n;
    cout<<"enter the value of binary : ";
    cin>>n;
    cout<<"the value of decimal is : "<<binarytodecimal(n)<<endl;
    }