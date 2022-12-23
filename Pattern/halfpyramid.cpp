#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;


//left half pyramid lower!!
    // for(int i=n;i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }



//right half pyramid 180 degree rotated!! 

        for(int i=n;i>=1;i--){
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