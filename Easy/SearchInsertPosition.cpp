#include <iostream>
#include <vector>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
    int store;
    for (int i = 0; i < nums.size(); i++) {
        if (target == nums[i]) return i; 
        else if (nums[i] < target) store = i; 
        else if (nums[0] > target) return 0;
    }
    return store+1;
}
int main() {
	vector<int> nums;
	int target, total, value, result;
	cin >> total; 
	for (int i = 0; i < total; i++) {
		cin >> value; 
		nums.push_back(value);
	}
	cin >> target; 
	result = searchInsert(nums, target);
    cout << result;
	return 0;
}