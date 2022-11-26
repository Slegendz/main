#include<iostream>
using namespace std;

int decimaltobinary(int n){
    int  ans=0;
    int x=1;
    while(n>0){
        int z=n%2; 
        ans+=z*x;
        x*=10;
        n/=2;
}
        printf("%d",ans);
}



int main(){
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);
    decimaltobinary(n);
}