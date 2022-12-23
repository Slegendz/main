#include<iostream>
using namespace std;

int main(){
    int a,b,c;

    cout<<"a :";
    cin>>a;

    cout<<"b :";
    cin>>b;

    c=b;
    b=a;
    a=c;

    cout<<"a is now :"<<a<<endl;
    cout<<"b is now :"<<b;
}