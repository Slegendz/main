#include<iostream>
using namespace std;

int prime(int a,int b){
    int i;
    for( int j=a;j<=b;j++){
    for(i=2;i<j;i++){
        if(j%i==0){
            break;
        }
    }
        if(i==j){
            cout<<"prime numbers are : s"<<j<<endl;
        }
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    prime(a,b);
}

