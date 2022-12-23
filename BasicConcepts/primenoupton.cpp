#include<iostream>
using namespace std;

int main(){
   int n;
   int num=2;
   int div;
   cout<<"enter n ";
    cin>> n;

    while(num<=n){
        div=2;
        while(div<num){
            if(num%div==0){
                break;
            }
            div++;
        }
        if(div==num){
            cout<<"prime numbers are:"<<num<<endl;
        }  
       num=num+1;
    }
}
