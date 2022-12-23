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
    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    cout<<"factorial is : "<<fact(n);
}