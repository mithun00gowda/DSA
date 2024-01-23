#include<iostream>
using namespace std;
void tower(int n,char sur, char dest, char helper){
    if(n==0){
        return;
    }
    tower(n-1,sur,dest,helper);
    cout<<"move from " << sur << " to " << dest <<endl;
    tower(n-1,helper,dest,sur);
}

int main(){
    tower(3,'a','c','b');
    return 0;
    
} // namespace std;int main()

