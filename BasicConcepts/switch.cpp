#include<iostream>
using namespace std;

int main(){
    char button;
    cin>>button;

    switch(button){
        case 'a':
            cout<<"namaste"<<endl;
            break;
         case 'b':
            cout<<"hola"<<endl;
            break;
        case 'c':
            cout<<"bonjour"<<endl;
            break;
        case 'd':
            cout<<"hello"<<endl;
            break;
         case 'e':
            cout<<"ciao"<<endl;
            break;
        default:
            cout<<"i am still learning";
            break;
    }
}