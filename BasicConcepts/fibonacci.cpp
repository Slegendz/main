#include<iostream>
using namespace std;

void fib(int n){
    int fib1,fib2,nextterm;
    fib1=0;
    cout<<"fib(0)= "<<fib1<<endl;
    fib2=1;
    cout<<"fib(1)= "<<fib2<<endl;
    nextterm=fib1+fib2;
    for(int i=2;i<=n;i++){
        cout<<"fib("<<i<<")= " <<nextterm<<endl;
        fib1=fib2;
        fib2=nextterm;
        nextterm=fib1+fib2;
}
}

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    fib(n);
}