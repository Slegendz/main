#include<iostream>
#include<string>
using namespace std;

int main(){
    string a="abc";
    string b="xyz";

    cout<<a.compare(b)<<endl;   //negative means first string is less than other one 
    cout<<b.compare(a)<<endl;   //positive means first string is greater than other one 

    a="abc";
    b="abc";
    cout<<a.compare(b)<<endl;   //0 means first string is equal to first one 

}