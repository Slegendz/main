#include<iostream>
using namespace std;

int main(){
    int n;
    int arr[100];
    cout<<"enter the value of n : ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int counter=0;
    while(counter<n){
        for(int j=0;j<n-counter;j++){
            if(arr[j+1]<=arr[j]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
            counter++;
    }

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

}