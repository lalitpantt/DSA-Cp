#include<iostream>
#include<stack>
using namespace std;
void reverstack(stack<int> &st){
    stack<int> temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }
    st= temp;

}

int main() {
    stack<int> st;
    int n, x;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> x;
        st.push(x);
    }
    reverstack(st);
while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();

}
return 0;
}