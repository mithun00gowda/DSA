#include<iostream>
using namespace std;

int search(int arr[], int n, int key){
    int res;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            res = i;
        }
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int key;
    cin>>key;
    cout<<search(arr,n,key)<<endl;
}