#include<iostream>
using namespace std;

int getbit(int n,int pos){
    return((n & (1<<pos)!=0));
}

int setbit(int n,int pos){
    return ( n | (1<<pos));
}

int clearbit(int n,int pos){
    int mask=~(1<<pos);
    return ( mask & n );
}

int updatebit(int n, int pos, int value ){
    int mask=~(1<<pos);
    n=(n & mask);
    return ( n | (value<<pos));
}

int main(){
    cout<<"the getbit is : "<<getbit(5,2)<<endl;
    cout<<"the setbit is : "<<setbit(5,1)<<endl;
    cout<<"the clearbit is : "<<clearbit(5,2)<<endl;
    cout<<"the updatebit is : "<<updatebit(5,1,1)<<endl;


}