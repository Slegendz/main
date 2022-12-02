#include<iostream>
using namespace std;

int addtwobinary(int a,intb){
    int lastdigit=a%2;
    int lastdigit1=b%2;
    int carry;

    if(a==0 && b==1){
        carry=1;
    }
    if(a==0 && b==0){
        carry=0;
    }

    if(a==1 && b==1){
        carry=1;
        
    }
}






int main(){
    int a,b;
    cout<<"enter the binary a and b : ";
    cin>>a>>b;

    cout<<addtwobinary(a,b);
}