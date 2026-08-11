#include<iostream>
using namespace std;
void printnumber(int i,int n){
    if(i>n){
        return;
    }
   cout<<i<<endl;
    printnumber(i+1,n);
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    printnumber(1,n);
    return 0;
}