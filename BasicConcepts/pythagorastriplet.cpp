#include<iostream>
#include<cmath>
using namespace std;

int max3(int x,int y,int z){
    return max(x,max(y,z));

}


int main(){
    int x,y,z;
    cout<<"enter the value of x,y,z : ";
    cin>>x>>y>>z;
    
    int a,b,c;
    a=max3(x,y,z);
    if(a==y){
        b=x;
        c=z;
    }
    else if(a==z){
        b=x;
        c=y;
    }
    else{
        b=y;
        c=z;
    }

    if(a*a==b*b+c*c){
        cout<<"its a pythagorian triplet";
    }
    else{

        cout<<"its not a pythagorian triplet";
    }

}