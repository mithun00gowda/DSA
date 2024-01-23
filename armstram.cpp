#include<iostream>
#include<cmath>


using namespace std;

int main(){
    int n;
    cin>>n;
    int originaln=n;
    int sum=0;
    while (n>0){
        int lg=n%10;
        sum += pow(lg , 3);
        n=n/10;

    }
    if(originaln==n){
        cout<<"armstram";
    }else{
        cout<<"not armstram";
    }

    return 0;
    

}