class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {

        // Difference ko descending order mein arrange karo
        for(int i = 0; i < tasks.size(); i++) {
            for(int j = i + 1; j < tasks.size(); j++) {

                if(tasks[i][1] - tasks[i][0] <
                   tasks[j][1] - tasks[j][0]) {

                    swap(tasks[i], tasks[j]);
                }
            }
        }

        int ans = 0;
        int energy = 0;

        for(int i = 0; i < tasks.size(); i++) {

            // Task start karne ke liye energy kam hai
            if(energy < tasks[i][1]) {
                ans += tasks[i][1] - energy;
                energy = tasks[i][1];
            }

            // Actual energy spend karo
            energy -= tasks[i][0];
        }

        return ans;
    }
};