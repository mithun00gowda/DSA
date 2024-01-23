#include<iostream>
using namespace std;

void subSequence(string s,string ans ){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string ros = s.substr(1);

    subSequence(ros,ans);
    subSequence(ros,ans+ch);

}

int main(){
    string s;
    string ans=" ";
    cin>>s;
    subSequence(s,ans);
    return 0;
}