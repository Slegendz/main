#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    char n;
    cin>>n;

    switch(n){
        case '+':
           cout<<a+b<<endl;
           break;
        case '-':
           cout<<a-b<<endl;
           break;
        case '*':
          cout<<a*b<<endl;
           break;
       case '/':
           cout<<a/b<<endl;
         break;
        default:
           cout<<"bhai simple calculator h"<<endl;
           break;
    }
}