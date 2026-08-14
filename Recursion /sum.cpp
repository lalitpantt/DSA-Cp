//sum of fist n number 
//functtinal call
#include<iostream>
using namespace std;
/*int sum(int n){
    if(n==0){
        return 0;

    }
    return n +sum(n-1);
}

int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<"sum of firest n nubmber is:"<<sum(n)<<endl;
    return 0;
}

//recursive call
#include<iostream>
using namespace std;
int sum(int i,int sum){
    if(i<1){
        return sum;
    }
return sum(i-1,sum+1);
}
int sum(int n){
    return sum(n,0);
}*/

//factorial of n numbersss
int fact(int n){
    if(n==0){
        return 1;

    }
    return n *fact(n-1);
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<"factorial is:"<<fact(n)<<endl;

}
