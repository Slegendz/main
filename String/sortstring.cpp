#include<iostream>
#include<string>
#include<algorithm>         //algorithm library conatains string sort function 
using namespace std;

int main(){
    string s="xyzahmanbnbi";
    sort(s.begin(),s.end());            //parameters of sort from string begin and end shoudl be given so it can traverse and sort it 
    cout<<s;
}