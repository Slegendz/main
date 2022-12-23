#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"eneter the value of n: ";
    cin>>n;
    int i;

    for(i=2;i<n;i++){
        if(n%i==0){
            break;
        }
}
    if(i==n){
        cout<<"its a prime number";
    }
}