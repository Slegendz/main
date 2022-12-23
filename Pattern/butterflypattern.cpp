#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1,a=1;j<=i || a<=n;j++,a++){
            if(j<=i){
            cout<<"* ";
            }
            if(j>i){
              cout<<"  ";
            }
        }
        for(int j=1,a=1;j<=i || a<=n;j++,a++){
            if(a>n-i){
              cout<<"* ";
            }                    
            if(a<=n-i){
              cout<<"  ";
            }
        }
        cout<<endl;
        }

    for(int i=n;i>=1;i--){
        for(int j=1,a=1;j<=i || a<=n;j++,a++){
            if(j<=i){
            cout<<"* ";
            }
            if(j>i){
              cout<<"  ";
            }
        }
        for(int j=1,a=1;j<=i || a<=n;j++,a++){
            if(a>n-i){
              cout<<"* ";
            }                    
            if(a<=n-i){
              cout<<"  ";
            }
        }
        cout<<endl;
        }
    }





