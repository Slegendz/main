#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the value of arrays : ";
        cin>>arr[i];
    }
     int greatest=INT_MIN;
     int smallest=INT_MAX;

     for(int i=0;i<n;i++){
        if(arr[i]>greatest){
            greatest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
     }
     cout<<"max value is : "<<greatest<<endl;;
     cout<<"min value is : \n"<<smallest;
}