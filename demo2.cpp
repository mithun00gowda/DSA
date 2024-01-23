#include<iostream>
using namespace std;

    bool isPalindrome(int x) {
        int original = x;
        int lastdigit = 0;
       int reverse = 0;
        while(x>0){
            lastdigit = x%10;
            reverse = (reverse*10) + lastdigit;
            x/=10;   
        }
        if(original==reverse){
            return true;
        }else{
            return false;
        }
    }
    int main(){
        int x;
        scanf("%d",&x);
        if(isPalindrome(x)==true){
            printf("Palindrom");
        }else{
            printf("not palindrom");
        }

        return 0;
    }