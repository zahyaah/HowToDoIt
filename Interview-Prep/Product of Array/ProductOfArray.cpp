#include <iostream>
#include <vector>
using namespace std;
vector<int> product(vector<int> &arr) {
    vector<int> result; 
    int count = 1, i; 
    for (i = 0; i < arr.size(); i++) count *= arr[i];
    for (i = 0; i < arr.size(); i++) result.push_back(count/arr[i]);
    return result;
}
int main() {
    vector<int> arr, store; 
    int ask, i, value;
    cin >> ask; 
    for (i = 0; i < ask; i++) {
        cin >> value; 
        arr.push_back(value);
    }
    store = product(arr);
    for (int i = 0; i < store.size(); i++) cout << store[i] << " ";
    return 0;
}