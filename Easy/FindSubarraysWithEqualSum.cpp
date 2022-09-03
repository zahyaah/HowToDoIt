class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int count = 0, i, j; 
        vector<int> store;
        for (i = 1; i < nums.size(); i++) {
            int s = nums[i]+nums[i-1];
            store.push_back(s);
        }
        for (i = 0; i < store.size(); i++) {
            for (j = 0; j < store.size(); j++) {
                if (i == j) continue; 
                else if (store[i] == store[j]) count++;
            }
        }
        if (count >= 2) return 1; 
        else return 0; 
    }
};