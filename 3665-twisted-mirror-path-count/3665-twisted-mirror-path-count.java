class Solution {
    public int uniquePaths(int[][] grid) {
        final int MOD = 1_000_000_007;
        int n = grid[0].length;

        int[] down = new int[n];
        down[0] = 1;

        for (int[] row : grid) {
            int right = 0;

            for (int j = 0; j < n; j++) {
                if (row[j] == 1) {
                    int temp = right;
                    right = down[j];
                    down[j] = temp;
                } else {
                    right = down[j] = (int) (((long) right + down[j]) % MOD);
                }
            }
        }

        return down[n - 1];
    }
}