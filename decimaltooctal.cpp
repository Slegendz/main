#include<iostream>
using namespace std;

int decimaltooctal(int n){
    int ans=0;
    int x=1;
    while(x<=n){
        x*=8;
    }
    x/=8;
    while(x>0){
        int lastdigit=n/x;
        n-=lastdigit*x;
        ans=ans*10+lastdigit;
        x/=8;
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter the value of the decimal : ";
    cin>>n;
    cout<<"the value of the decimal is " <<decimaltooctal(n)<<endl;
}