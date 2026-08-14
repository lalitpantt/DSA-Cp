//reverse a array using recursion
#include<iostream>
using namespace std;
void reverse(int i,int n,int arr[]){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reverse(i+1,n,arr);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(0,n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
}
// using two pointer approach
#include<iostream>
using namespace std;
void reverse(int arr[], int l,int r){
    if(l<=r){
        swap(arr[l],arr[r]);
        reverse(arr,l+1,r-1);
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
}
