#include<string>
#include<iostream>
using namespace std;

string decimaltohexadecimal(int n){
    int x=1;
    string ans="";

    while(x<=n){
        x*=16;
    }
    x/=16;
    while(x>0){
        int lastdigit=n/x;
        n-=lastdigit*x;
        x/=16;
        if(lastdigit<=9){
            ans=ans+to_string(lastdigit);
        }
        else{
            int c='A'+lastdigit-10;
            ans.push_back(c);
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter the decimal : ";
    cin>>n;
    cout<<"the hexadecimal number is : "<<decimaltohexadecimal(n)<<endl;
}