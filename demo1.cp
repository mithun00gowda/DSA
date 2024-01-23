#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    string words[10] { "zero","one","two","three","four","five","sixth", "seven","eight", "nine" };

int a,b;
cin >> a ;
cin >> b ;

for (int i = 0; i<b+1 ; i++) {
    if ( i >= 1 && i <= 9 ){
        cout << words[i] << endl; 
    }
    else if ( i % 2 == 0){
        cout << "even" << endl;
    }
    else if ( i % 2 != 0){
        cout << "odd" << endl;

}

}
return 0;
}