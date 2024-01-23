#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     const int N = 1e6 + 1;
     int idX[N];
     for(int i=0;i<N;i++){
        idX[i] = -1;
     }

     int minX=INT_MAX;

     for(int i=0;i<n;i++){
        if(idX[arr[i]] != -1){
            minX = min(minX, idX[arr[i]]);
        }else{
            idX[arr[i]] = i;
        }
     }

     if(minX == INT_MAX){
        cout<<"-1"<<endl;
     }else{
        cout<<minX + 1 <<endl;
     }
     return 0;
}