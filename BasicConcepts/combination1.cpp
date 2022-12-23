#include<iostream>
using namespace std;

int fact(int n){
    int fac=1;
    for(int i=1;i<=n;i++){
        fac=fac*i;
    }
    return fac;
}

int main(){
    int n,r;
    cout<<"enter the value of n and r : ";
    cin>>n>>r;
    int comb;
    comb=fact(n)/(fact(r)*fact(n-r));

    cout<<"combination is : "<<comb;
}