class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {

        int n = tasks.size();

        // Difference ke according sort
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {

                int x = tasks[i][1] - tasks[i][0];
                int y = tasks[j][1] - tasks[j][0];

                if(x < y)
                    swap(tasks[i], tasks[j]);
            }
        }

        int energy = 0;
        int ans = 0;

        for(int i = 0; i < n; i++) {

            int actual = tasks[i][0];
            int minimum = tasks[i][1];

            if(energy < minimum) {
                ans += minimum - energy;
                energy = minimum;
            }

            energy -= actual;
        }

        return ans;
    }
};