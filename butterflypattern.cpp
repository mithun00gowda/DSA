#include<iostream>
using namespace std;


int main(){
    int n,i,j,count=1;
    cin>>n;
    for(i=1;i<=n;i++){
        count++;
        for(j=1;j<=i;j++){
            cout<<count;
            
        }
        int space = 2*n - 2*i;
        for(j=1;j<=space;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<count;
        }
        cout<<endl;
    }
    for(i=n;i>=1;i--){
        count++;
        for(j=1;j<=i;j++){
            cout<<count;
            
        }
        int space = 2*n - 2*i;
        for(j=1;j<=space;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<count;
        }
        cout<<endl;
    }
    return 0;
}