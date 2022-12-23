#include<iostream>
using namespace std;


// right side pyramid 180 degree rotated upper


int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
            cout<<"  ";
        }
          else{
            cout<<"* ";
          }
        }
        cout<<endl;
    }
}


