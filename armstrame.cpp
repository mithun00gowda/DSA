#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int sum=0;
    int original=n;
    while(n>0){
        int lg = n%10;
        int power = pow(lg, 3);
        cout<<power<<endl;
        sum = sum + power;
        n=n/10;
    }
    if(original==sum){
        cout<<"armstrame number"<<endl;
    }else{
        cout<<"not aramstrame number"<<endl;
    }
    cout<<sum<<endl;
    cout<<original<<endl;

    return 0;
}