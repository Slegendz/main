#include<string.h>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a=10;
    vector<int> myvector{1,2,3,4,5,6};
    myvector.push_back(a);
    for(auto it =myvector.begin();it!=myvector.end();++it)
      cout<<' '<<*it;

}