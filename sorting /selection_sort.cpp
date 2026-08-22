#include<iostream>
using namespace std;
void selection_sort(int arr[],int n){
    for(int i=0;i<n-2;i++){
        int mini=i;
        for(int j=i;j<n-1;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }

        }
        swap(arr[i],arr[mini]);
    }
}


void bubble_sort(int arr[],int n){
    for(int i=n-1;i>1;i--){
        int didswap=0;
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                didswap=1;

            }
        }
        if(didswap==0){
            break;
        }
        cout<<"pass\n5";

    }
}
    


void insertion_sort(int arr[],int n){
        for(int i=0;i<n-1;i++){
            int j=i;
            while(j>=0 && arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                j--;
            }
        }
        cout<<"pass\n";

    }


    int main (){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
insertion_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}