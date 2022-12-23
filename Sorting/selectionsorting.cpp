#include<iostream>
using namespace std;

int selectionsorting(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++) {
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}


int main(){
    int n;
    int arr[100];
    cout<<"enter the value of array : ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    selectionsorting(arr,n);

}