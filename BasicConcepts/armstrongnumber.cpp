#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int a,c;
    int number=0;
    c=n;
    while(n>0){
        int lastterm=n%10;
        a=round(pow(lastterm,3));
        number=number+a;
        n=n/10;
    }
    if(number==c){
        cout<<"its armstrong number cause it is : "<<number<<endl;
    }
    else{
        cout<<"its not an armstrong number ";
    }
    cout<<n;
}