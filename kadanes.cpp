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

    int currentSum=0;
    int sum=INT_MIN;
    for(int i=0;i<n;i++){
        currentSum += arr[i];
        if(currentSum<0){
            currentSum = 0;
        }
        sum = max(sum,currentSum);
    }
    cout<<sum<<endl;
    return 0;
}