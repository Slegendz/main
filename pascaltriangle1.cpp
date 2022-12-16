#include<iostream>
using namespace std;

int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int n,comb;
    cout<<"enter the value of n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            comb=fact(i)/(fact(j)*fact(i-j));
            cout<<comb<<" ";
        }
        cout<<"\n";
    }
}