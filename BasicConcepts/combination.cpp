#include<iostream>
using namespace std;

int comb(int n,int r){
    int fac=1;
    int fac1=1;
    int fac2=1;

    for(int i=1;i<=n;i++){
    fac=fac*i;
}
    for(int i=1;i<=r;i++){
    fac1=fac1*i;
}
    for(int i=1;i<=(n-r);i++){
    fac2=fac2*i;
}
    int fact;
    fact=fac/((fac1)*fac2);
    return fact;
}


int main(){
    int n,r;
    cout<<"enter the value of n and r: ";
    cin>>n>>r;

    cout<<"combination is : "<<comb(n,r);
}