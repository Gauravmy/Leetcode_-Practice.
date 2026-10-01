import java.util.*;

class Solution {
    public int[] findRightInterval(int[][] a) {
        int n = a.length;
        int[] ans = new int[n];

        // {start, original index}
        int[][] start = new int[n][2];

        for (int i = 0; i < n; i++) {
            start[i][0] = a[i][0];
            start[i][1] = i;
        }

        // Start points ko sort karo
        Arrays.sort(start, (x, y) -> x[0] - y[0]);

        for (int i = 0; i < n; i++) {
            int l = 0, r = n - 1;
            int index = -1;

            // Smallest start >= current end
            while (l <= r) {
                int mid = (l + r) / 2;

                if (start[mid][0] >= a[i][1]) {
                    index = start[mid][1];
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }

            ans[i] = index;
        }

        return ans;
    }
}