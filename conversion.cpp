#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int binaryTodecimal(int n){
    int ans = 0;
    int x = 1;
    while(n>0){
        int y = n%10;
        ans += x * y;
        x*=2;
        n/=10;
    }
    return ans;
}
int octalToDecimal(int n){
    int ans = 0;
    int x = 1;
    while(n>0){
        int y = n%10;
        ans += x * y;
        x*= 8;
        n/=10;
    }
    return ans;
}
int hexadecimalToDecimal(string n){
    int ans = 0;
    int x=1;
    int s = n.size();
    for(int i=s-1;i>=0;i--){
        if(n[i] >= '0' && n[i]<='9'){
            ans += x*(n[i] - '0');
        }else if(n[i] >= 'A' && n[i] <= 'F'){
            ans += x*(n[i] - 'A' + 10);
        }else if(n[i] >= 'a' && n[i] <= 'f'){
            ans +=x*(n[i] - 'a' + 10);
        }
        x*=16;
    }
    return ans;

}
int decimalToBinary(int n){
    int x=1;
    int ans = 0;
    while(x<=n)
    x*=2;
    x/=2;
    while(x>0){
        int lastDigit = n/x;
        n -= lastDigit * x;
        x/=2;
        ans = ans * 10 + lastDigit;
    }
    return ans;
}
int decimalToOctal(int n){
    int x=1;
    int ans = 0;
    while(x<=n)
    x*=8;
    x/=8;
    while(x>0){
        int lastDigit = n/x;
        n -= lastDigit * x;
        x/=8;
        ans = ans * 10 + lastDigit;
    }
    return ans;
}

string decimalToHexadecimal(int n){
    int x=1;
    string ans = " ";
    while(x<=n)
    x*=16;
    x/=16;

    while(x>0){
        int lastDigit = n/x;
        n -= lastDigit*x;
        x/=16;

        if(lastDigit <= 9)
        ans=ans + to_string(lastDigit);
        else{
            char c = 'A' + lastDigit - 10;
            ans.push_back(c);
        }
    }
    return ans;
}

int32_t main(){
    int n;
    string s;
    cout<<"Enter the choich 1-6"<<endl;
    cout<<"1.BinaryToDecimal\n2.octalToDecimal\n3.hexadecimalToDecimal\n4.DecimalToBinary\n5.DecimalToOctal\n6.DecimalToHexadecimal\n7.exit\n";
    int ch ;
    cin>>ch;
    switch (ch)
    while(ch>0)
    {
    case 1:cout<<"enter the binary number"<<endl;
        cin>>n;
        cout<<binaryTodecimal(n)<<endl;
        break;
    case 2:cout<<"enter the octal number"<<endl;
        cin>>n;
        cout<<octalToDecimal(n)<<endl;
        break;
    case 3:cout<<"enter the hexadecimal number"<<endl;
        cin>>s;
        cout<<hexadecimalToDecimal(s)<<endl;
        break;
    case 4:cout<<"enter the decimal number"<<endl;
        cin>>n;
        cout<<decimalToBinary(n)<<endl;
        break;
    case 5:cout<<"enter the decimal number"<<endl;
        cin>>n;
        cout<<decimalToOctal(n)<<endl;
        break;
    case 6:cout<<"enter the decimal number"<<endl;
        cin>>n;
        cout<<decimalToHexadecimal(n)<<endl;
        break;
    case 7:exit;
        break;
    
    default:cout<<"wrong choice\n";
        break;
    }
    return 0;
}