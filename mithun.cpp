#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int a;
    cin>>a;
    if(a%2==0){
        cout << "given nuber is even"<<endl;
    }else{
        cout << " given number is odd"<<endl;
    }
    
    
    return 0;
}