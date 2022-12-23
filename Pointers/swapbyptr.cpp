#include<iostream>
using namespace std;

int swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;        //call by reference 
}

int main(){
    int a=2;
    int b=4;

    int *aptr=&a;
    int *bptr=&b;

    swap(aptr,bptr);
    cout<<"a is : " <<a<<endl<<"b is : "<<b<<endl;

    /*OR 
      BY using another method
      
      int a=2;
      int b=4;
      swap(&a,&b);
      cout<<"a is : "<<a<<endl<<"b is : "<<b<<endl;
      */
}