#include<iostream>
using namespace std;

int main(){
    int ch;
    cout<<"enter the choice\n";
    cout<<"1.\n 2.\n 3.\n 4.\n";
    cin>>ch;
    switch (ch)
    {
    case 1:
        cout<<"hi";
        break;
    case 2:
        cout<<"hello";
        break;
    case 3:
        cout<<"mithun";
        break;
    case 4:
        cout<<"h";
        break;
    
    default:
        cout<<" default";
        break;
    }
    return 1;
}