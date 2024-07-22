#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int>& arr, int start, int end) {
    int n = arr.size() - start;
    cout << n;
    for(int i = 0; i < n/2; i++) {
        int temp = arr[start+i];
        arr[start+i] = arr[end-i];
        arr[end-i] = temp;
    }
}

int main () {
    vector<int> arr = {1,2,3,4,5,6,7};
    int k = 3;
    // k = k % arr.size();
    int n = arr.size();
    // reverseArray(arr,n-k,n-1);
    reverseArray(arr,0,k);
    // reverseArray(arr,0,n-1);

    // printing the array
    for(auto i: arr) {
        cout << i << " ";
    }
    return 0;
}