#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int b=n;

    for(int i=1;i<=b;i++){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        n--;
        cout<<endl;
    }

    // Alternate method: columns= n=1-Number of rows
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n+1-i;j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
}