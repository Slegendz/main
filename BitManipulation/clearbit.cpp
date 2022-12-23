#include<iostream>
using namespace std;

int clearbit(int n,int pos){
    int a=~(1<<pos);
    return ((a & n));
}

int main(){
    cout<<clearbit(5,2); 
}