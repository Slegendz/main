#include<iostream>
using namespace std;

int main(){
    int n,i,a,c,b=0;
    int j;
    cout<<"enter the value of n : ";
    cin>>n;
    int count=0;

    for(i=1;i<=n;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            a=i;
            c=b+2;
            if(a==c && b!=0){
                cout<<"twin prime numbers are :"<<b<<" "<<a<<endl;
            }
                b=a;
        }
    }
}