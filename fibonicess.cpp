#include<iostream>
using namespace std;

void fibo(int num){
    int f1=1;
    int f2=2;
    int next;
    for(int i=1;i<=num;i++){
        cout<<f1<<endl;
        next = f1 + f2;
        f1 = f2;
        f2 = next;

    }
    return;
}

int main(){
    int n;
    cin>>n;
    
    fibo(n);
}