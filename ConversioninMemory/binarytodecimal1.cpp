#include<iostream>
using namespace std;

int binarytodecimal(int n){
    int ans=0;
    int x=1;

    while(n>0){
        int y=n%10;
        ans+=y*x;
        x*=2;
        n/=10;
    
    }
    return ans;0
}

    int main(){
        int n;
        cout<<"enter the number n : ";
        cin>>n;
        cout<<"the value of decimal is : "<<binarytodecimal(n)<<endl;
        }
