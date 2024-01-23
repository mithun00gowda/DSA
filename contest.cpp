#include<iostream>
#include<stack>
using namespace std; 

int checkQ(int x, int y){
    int ans;
    stack<int> ansStack;
    if(x!=y){
        x=x+1;
        y=y-2;
    }
        if(x==y)
    {
        ans = 1;
        cout<<ans<<endl;
    }else{
        ans = 0;
        cout<<ans<<endl;
    }
}

int main(){
    int n;
    int result1;
    int result2;
    cin>>n;
    int x,y;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        checkQ(x,y);
    }
}
