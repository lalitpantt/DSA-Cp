#include<iostream>
using namespace std;
void solve(int n, int source,int des,int aux){
    if(n==0){
        return;
    }
    solve(n-1,source,aux,des);
    cout<<"move disk "<<n<<"from"<<source<<"to"<<des<<endl;
    solve(n-1,aux,des,source);
    
}4
int main(){
    int n;
    cout<<"enter the number of disks"<<endl;
    cin>>n;
    solve(n,1,3,2);
    return 0;
}



//coount the number moves 
#include<iostream>
using namespace std;
int solve(int n,int st,int des, int aux)
{
    if(n==0) {return 0;}
    int count=0;
    count+=solve(n-1,st,aux,des);
    cout<<"move disk "<<n<<"from"<<st<<"to"<<des<<endl;
    count++;
    count+=solve(n-1,aux,des,st);
    return count;
}
int main(){
    int n;
    cout<<"enter the number of disks"<<endl;
    cin>>n;
    int moves=solve(n,1,3,2);
    cout<<"total moves:"<<moves<<endl;
    return 0;
}
