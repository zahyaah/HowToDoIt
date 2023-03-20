class Solution {
    public boolean isPerfectSquare(int num) {
        long low = 0, high = num;
        if (num == 1) return true;

        while (low <= high) {
            long mid = low + (high-low)/2;
            if (mid*mid == num)
                return true;
            else if (mid*mid < num)
                low = mid+1;
            else
                high = mid-1;
        }
        return false;
    }
}