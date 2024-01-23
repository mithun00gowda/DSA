#include<iostream>
using namespace std;

int reverse(int n){
    int lastnumber=0;
    int x=0;
    int ans = 0;
    while(n>0){
        lastnumber = n%10;
        ans = ans * 10 + lastnumber;
        n/=10;
    }
    return ans;
}

int main(){
    int n=283782;
    int ans = reverse(n);
    cout<<ans<<endl;
    if(n == ans){
            cout<<"palindrom"<<endl;
        }else{
            cout<<"not palindrom"<<endl;;
        }
    return 0;

}