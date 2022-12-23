#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int a=3,b=1;

    for(int i=1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if(i==1){
                if(j==a){
                    cout<<"* ";
                    a=a+4;
                }
                else{
                    cout<<"  ";
                }
            }
            if(i==2){
                if(j%2==0){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            if(i==3){
                if(j==b){
                    cout<<"* ";
                    b=b+4;
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
        }
    }
