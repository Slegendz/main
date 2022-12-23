#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    float sum=0;
    float c=n;

    while(n>0){
        float a=n%10;
        sum=sum+(pow(a,3));                 /*either we can use round(pow(x,y)) -> round function or we can convert 
                                         datatypes from int to float so that we can get round figures of powera and can get exact number*/
        n=n/10.0;
    }

    if(sum==c){
        cout<<"its an armstrong number.";
    }
    else{
        cout<<"its not an armstrong number";
    }
    
}