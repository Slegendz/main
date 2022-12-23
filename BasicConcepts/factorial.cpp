#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    cin>>n1>>n2;
    int fact1=1;
    int fact2=1;

    for(int i=1;i<=n1;i++){
        fact1=i*fact1;
    }
    cout<<fact1<<endl;

    for(int j=1;j<=n2;j++){
        fact2=j*fact2;
    }
    cout<<fact2<<endl;
}