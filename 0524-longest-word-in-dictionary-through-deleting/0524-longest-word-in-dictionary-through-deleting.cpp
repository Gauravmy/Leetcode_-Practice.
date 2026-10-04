class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        string ans = "";

        for(string word : dictionary) {
            int i = 0;

            // Check word s se ban sakta hai ya nahi
            for(char c : s) {
                if(i < word.size() && c == word[i])
                    i++;
            }

            // Agar pura word mil gaya
            if(i == word.size()) {

                // Longer word mila
                if(word.size() > ans.size())
                    ans = word;

                // Same length hai to chhota word lo
                else if(word.size() == ans.size() && word < ans)
                    ans = word;
            }
        }

        return ans;
    }
};