#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of N : ";
    cin>>n;
    int m;
    cout<<"enter the value of M : ";
    cin>>m;
    int arr[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
        cout<<"\n";
    }
    for(int i=0;i<n;i++ ){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}