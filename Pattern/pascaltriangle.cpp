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
    int comb,i,n;
    cout<<"enter the value of n : ";
    cin>>n;
    for(i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            comb=fact(i)/(fact(i-j)*fact(j));
            cout<<comb<<" ";
        }
        cout<<endl;
    }
}

// Output:
// 1 
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
