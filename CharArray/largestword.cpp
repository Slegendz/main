#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    cin.ignore();
    
    char arr[n+1];
    cin.getline(arr,n+1);
    cin.ignore();
    
    int i=0;
    int currentlen=0,maxlen=0;
    int start=0,end=0;

    while(1){
        if(arr[i]==' ' || arr[i]=='\0'){
            if(currentlen>maxlen){
                end=start;
                maxlen=currentlen;
            }
        start=i+1;
        currentlen=0;
        }
        else{
            currentlen++;
        }

        if(arr[i]=='\0'){
            break;
        }
        i++;
    }

    for(int i=0;i<maxlen;i++){
        cout<<arr[i+end];
    }

}