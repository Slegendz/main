#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int a=n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=a;j++){
            cout<<"* ";
        }
        a--;
        cout<<endl;
    }
}


//AlTERNATE


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}