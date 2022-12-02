#include<iostream>
#include<string>
using namespace std;
string decimaltohexa(int n){
        string ans = "";
        int x=1;
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
                char c= lastdigit+'A'-10;
                ans.push_back(c);
             }
        }
       return ans;
} 
int main(){
    int n;
    cout<<"enter the decimal : ";
    cin>>n;
    cout<<"the hexadecimal number is  : "<<decimaltohexa(n);
}