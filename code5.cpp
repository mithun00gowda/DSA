#include<iostream>
using namespace std;

int isPalindrom(int n){
    int reverse = 0;
    int orginal = n;
    while(n>0){
        int lastnumber = n%10;
        reverse = reverse * 10 + lastnumber;
        n/=10;
    }
    if(reverse == orginal){
        cout<<"Palindrom"<<endl;
    }else{
        cout<<"not palindrom"<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    isPalindrom(n);
    return 0;
}