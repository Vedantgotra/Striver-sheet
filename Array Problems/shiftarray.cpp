#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1};
    vector<int> tempArr;
    int k = 3;
    // taking element into a demo array
    for(int i = arr.size()-k; i < arr.size(); i++) {
        tempArr.push_back(arr[i]);
    }
    for(int i = arr.size()-1; i >= k; i--) {
        arr[i] = arr[i-k];
    }
    for(int i = 0; i < k; i++) {
        arr[i] = tempArr[i];
    }
    for(auto i: arr) {
        cout << i << endl;
    }

    return 0;
}