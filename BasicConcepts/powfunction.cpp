#include<iostream>
using namespace std;

int pows(int a,int b){
    int power=1;
    for(int i=1;i<=b;i++){
        power = power *a;
    }
    return power;

}


int main(){
    int a,b;
    cout<<"enter base : ";
    cin>>a;
    cout<<"enter power : ";
    cin>>b;

    cout<<"result is : "<<pows(a,b);
    
}