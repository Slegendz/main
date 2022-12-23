#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s1="hello how are you!\n";
    cout<<s1;

    string s2="fam";
    string s3="ily";

    cout<<s2+s3;
    cout<<endl;

    string s4="fam";
    string s5="ily";
    s4.append(s5);
    cout<<s4;
    cout<<"\n";

    string s7;
    getline(cin,s7);
    cout<<s7<<endl;

    string s6;
    cin>>s6;
    cout<<s6<<endl;

    string sap="family";
    cout<<sap[2];
    
    string abs="how are you!";
    abs.clear();
    cout<<abs<<endl;

    string ab="abc";
    string bc="xyz";
    cout<<ab.compare(bc)<<endl;
    cout<<bc.compare(ab)<<endl;

    string s="abc";     
    string sa="abc";
    cout<<s.compare(sa)<<endl;
    
    if(abs.empty())
        cout<<"abs is empty!"<<endl;

    string notemp="abc";
    if(!notemp.empty())
        cout<<notemp<<endl;

    string af="hello how are you";
    af.erase(3,6);
    cout<<af<<endl;

    cout<<af.find("are")<<endl;  

    string lol="hahah";
    lol.insert(2,"lol"); //inserts a string at a given index
    cout<<lol<<endl;

    string sam="nincompoop";
    string sja=sam.substr(6,4);       //prints the substring of string from index i to n times
    cout<<sja<<endl;          


    string sal="786";
    int x=stoi(sal);        
    cout<<x+2<<endl;

    x=24;
    string sha= to_string(x)+"2";
    cout<<sha<<endl;

    //sorted string 
    //use <algorithm> library to use sort fucntion 

    string sgh="xyazgskghsb";
    sort(sgh.begin(),sgh.end());
    cout<<sgh<<endl;




}