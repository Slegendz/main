#include<iostream>
using namespace std;

int updatebit(int n,int pos,int value){
        int mask=~(1<<pos);
        n=n & mask;
        return (n | (value<<pos));      //update bit is first clear bit and then set bit
        
    }


int main(){
    cout<<updatebit(5,1,1);
}