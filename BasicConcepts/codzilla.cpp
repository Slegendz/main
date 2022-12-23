#include<iostream>
using namespace std;

int main(){
    int n,temp,ladu=10;
    cout<<"enter n: ";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int calorie=ladu*(arr[0]);
    cout<<"max calorie is : "<< calorie;
}