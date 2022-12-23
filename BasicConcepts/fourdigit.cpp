#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the four digit number : ";
    cin>>n;

    int a,b,c,d,multiply=1;

    a=n%10;
    multiply*=a;
    n/=10;
    b=n%10;
    multiply*=b;
    n/=10;
    c=n%10;
    multiply*=c;
    n/=10;
    d=n%10;
    multiply*=d;
    n/=10;


    cout<<"multiplication of its digits is : "<<multiply;
}