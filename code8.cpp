#include<iostream>
using namespace std;
int check(int arr[],int n){
    int count = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count += 1;
            ans += count;
            count--;
        }
    }
    return ans;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<check(arr,n);
}