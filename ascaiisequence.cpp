#include<iostream>
using namespace std;

void ascaiSequence(string s, string ans){
    if(s.length() == 0){
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    int code = ch;
    string ros=s.substr(1);

    ascaiSequence(ros , ans );
    ascaiSequence(ros,ans+ch);
    ascaiSequence(ros,ans+to_string(code));

}
int main(){
    string s;
    string ans = " ";
    cin>>s;
    ascaiSequence(s,ans);
    return 0;
}