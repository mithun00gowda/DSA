#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int odd=0,even=0;
    while(n>0){
        int lastnumber = n%10;
        if(lastnumber%2==0){
            even +=lastnumber;
            
        }else{
            odd += lastnumber;
            
        }
        n=n/10;
    }
    cout<<"odd\n"<<odd<<endl;
    cout<<"even\n"<<even<<endl;
    return 0;
}