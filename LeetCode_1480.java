public class LeetCode_1480 {

    // Noob
    private static int[] runningSum(int[] nums) {
        int[] store = new int[nums.length];
        for (int i = 0; i < nums.length; i++) {
            int sum = 0;
            for (int j = 0; j <= i; j++) {
                sum += nums[j];
            }
            store[i] = sum;
        }
        return store;
    }
    // Better one
    private int[] runningSum(int[] nums) {
        for (int i = 1; i < nums.length; i++)
            nums[i] = nums[i-1] + nums[i];
        return nums;
    }

}
