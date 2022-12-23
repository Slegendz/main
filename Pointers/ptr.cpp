#include<iostream>
using namespace std;

int main(){
    int a=10;
    int*aptr=&a;
    aptr=&a;

    cout<<&a<<endl;
    cout<<int(aptr)<<endl;
    cout<<*aptr<<endl;

    *aptr=20;
    cout<<*aptr<<endl;

    aptr++;
    cout<<int(aptr)<<endl;


    int arr[]={10,20,30,40};
    cout<<*arr<<endl;

    int *ptr=arr;
    for(int i=0;i<4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;

    for(int i=0;i<4;i++){
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;
}