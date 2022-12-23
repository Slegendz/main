#include<iostream>
using namespace std;

int increment(int a){
    a++;
}

int main(){
    int a=2;
    increment(a);
    cout<<a<<endl;        //value doesn't increases because copy of variable is used in function

}