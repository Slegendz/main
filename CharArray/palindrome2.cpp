#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool flag=0;

    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-i]){
            cout<<"its not a palindrome";
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"its a palindrome";
    }
}