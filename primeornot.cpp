/* prime or not uisng a a math package*/

#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n;
cin>>n;
bool falg=0;
for(int i=2;i<sqrt(n);i++){
    if(n%i==0){
        falg=1;
        cout<<"non prime";
        break;
    }
}
if(falg==0){
    cout<<"prime";
}
 return 0;
}     