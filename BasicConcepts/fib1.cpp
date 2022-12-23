#include<iostream>
using namespace std;

void fib(int n){
    int fib1,fib2,nextterm;
    fib1=0;    
    fib2=1;
    nextterm=fib1+fib2;
    for(int i=1;i<=n;i++){
        cout<<"fib"<<i<<" "<<fib1<<endl;
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