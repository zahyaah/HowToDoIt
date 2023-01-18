public class DetectCapital520 {
    public boolean detectCapitalUse(String take) {
        char[] arr = take.toCharArray();
        int count = 0;
        int len = take.length();

        for (int i = 0; i < len; i++) {
            if (arr[i] >= 'A' && arr[i] <= 'Z')
                count++;
        }
        if (len == count)
            return true;
        else if (count == 1 && (arr[0] >= 'A' && arr[0] <= 'Z'))
            return true;
        else
            return count == 0;
    }
}
