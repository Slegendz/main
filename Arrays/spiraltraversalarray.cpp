#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<"enter the value of n,m: ";
    cin>>n>>m;
    
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
        cout<<"\n";
    }

    int rowstart=0,rowend=n-1,columnstart=0,columnend=m-1;

    while(rowstart<=rowend && columnstart<=columnend){

        //for rowstart
        for(int col=columnstart;col<=columnend;col++){
            cout<<arr[rowstart][col]<<" ";
        }
        rowstart++; 
        cout<<"\n";

        //for columnend
        for(int row=rowstart;row<=rowend;row++){
            cout<<arr[row][columnend]<<" ";
        }
        columnend--;
        cout<<"\n";

        //for rowend
        for(int col=columnend;col>=columnstart;col--){
            cout<<arr[rowend][col]<<" ";
        }
        rowend--;
        cout<<"\n";

        //for columnstart
        for(int row=rowend;row>=rowstart;row--){
            cout<<arr[row][columnstart]<<" ";
        }
        columnstart++;
        cout<<"\n";
    }
}