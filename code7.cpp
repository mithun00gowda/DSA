#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int curnsum[n+1];
    curnsum[0]= 0;
    for(int i=0;i<=n;i++){
        curnsum[i] = curnsum[i-1] + arr[i-1];
    }
    int maxsum = INT_MIN;
    for(int i=1;i<=n;i++){
        int sum = 0;
        for(int j=0;j<i;j++){
            sum = curnsum[i] - curnsum[j];
            maxsum = max(maxsum, sum);
        }
    }
    cout<<maxsum<<endl;
    return 0;
}