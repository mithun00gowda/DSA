#include<iostream>
using namespace std;

int pattern(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the 2 number"<<endl;
    cin>>n;
    cout<<"the pattern is"<<endl;
    pattern(n);

}