#include<iostream>
#include<string>
using namespace std;

int main(){
    string s="hello how are you ";
    cout<<s.length()<<endl;
    cout<<s.size()<<endl;

    for(int i=0;i<=s.length();i++){
        cout<<s[i]<<endl;
    }
}