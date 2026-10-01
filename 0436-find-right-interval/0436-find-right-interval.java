import java.util.*;

class Solution {
    public int[] findRightInterval(int[][] a) {
        int n = a.length;
        int[] ans = new int[n];

        Arrays.fill(ans, -1);

        for (int i = 0; i < n; i++) {
            int best = Integer.MAX_VALUE;

            for (int j = 0; j < n; j++) {

                // j ka start >= i ka end
                // aur sabse chhota start
                if (a[j][0] >= a[i][1] && a[j][0] < best) {
                    best = a[j][0];
                    ans[i] = j;
                }
            }
        }

        return ans;
    }
}