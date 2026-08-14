//multi recursion 
// fibinacci series
#include<iostream>
using namespace std;
int fib(int n){
    if(n<=1){
        return n;
    }
int  last,slast;
last= fib(n-1);
slast= fib(n-2);
return last+slast;
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n);
    
}