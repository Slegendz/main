#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int div=2;

    while(div<n){
        if(n%div==0){
            cout<<"its not a prime number";
            break;
        } 
            div=div+1;
    }
    if(div==n){
            cout<<"its a prime number";
        }
}
