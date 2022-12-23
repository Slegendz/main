#include<iostream>
using namespace std;


int main(){
    int pocketmoney=1800;

    for(int date=1;date<=30;date++){
        if(date%2==0){
            continue;
        }
        if(pocketmoney==0){
            cout<<"pocket money is over";
            break;
        }
        cout<<"day"<<date<<" go out"<<endl;
        pocketmoney=pocketmoney-300;
    }
}
