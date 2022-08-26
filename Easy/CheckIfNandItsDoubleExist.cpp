class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++) {
            for (int j = 0; j < arr.size(); j++) {
                if (i == j) continue; 
                else if (arr[j] == (arr[i]*2)) return 1;
            }
        }
        return 0;
    }
};