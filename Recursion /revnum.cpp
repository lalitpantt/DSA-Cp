#include<iostream>
using namespace std;
void revnum(int i, int n ){
    if(i<1){
        return;
    }
    cout<<i<<endl;
    revnum(i-1,n);
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    revnum(n,n);
    return 0;
}