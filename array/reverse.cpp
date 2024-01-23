#include<iostream>
using namespace std;

int reverse(int arr[], int n){
 int reverse;
 int f=0;
 int l=n-1;
 while(l>f){
    for(int i=0;i<n;i++){
        for(int j=n;j>0;j--){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
 }
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }
 return 0;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,n);
}