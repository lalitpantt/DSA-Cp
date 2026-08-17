//find the largest and smallest frequency of elements in an array

#include<iostream>
#include<map>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of hash table: ";
    cin >> n;

    int arr[n];
    map<int, int> mpp;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    int largestFreq = mpp.begin()->second;
    int smallestFreq = mpp.begin()->second;

    int largestElement = mpp.begin()->first;
    int smallestElement = mpp.begin()->first;

    for(auto it : mpp) {

        cout << it.first << " " << it.second << endl;

        if(it.second > largestFreq) {
            largestFreq = it.second;
            largestElement = it.first;
        }

        if(it.second < smallestFreq) {
            smallestFreq = it.second;
            smallestElement = it.first;
        }
    }

    cout << "Most frequent element: " << largestElement << endl;
    cout << "Least frequent element: " << smallestElement << endl;

    return 0;
}