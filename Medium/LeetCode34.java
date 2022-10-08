// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
    public int[] searchRange(int[] nums, int target) {
        int firstOccurrence = find(nums, target, true);
        int lastOccurrence = find(nums, target, false);
        int[] result = {firstOccurrence, lastOccurrence};
        return result;   
    }
    public int find(int[] nums, int target, boolean firstSearch) {
        int start = 0, end = nums.length-1, mid, result = -1; 
        while (start <= end) {
            mid = start + (end-start)/2;
            if (nums[mid] == target) {
                if (firstSearch)
                    end = mid-1; 
                else 
                    start = mid+1; 
                result = mid; 
            } else if (nums[mid] > target) end = mid-1; 
            else start = mid+1; 
        }
        return result;
    }
}