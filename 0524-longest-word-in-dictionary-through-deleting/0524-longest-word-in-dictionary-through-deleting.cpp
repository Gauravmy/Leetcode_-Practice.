class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {

        map<string, int> mp;

        // Saare words map mein store karo
        for(string word : dictionary)
            mp[word]++;

        string ans = "";

        // Words check karo
        for(auto x : mp) {

            string word = x.first;
            int i = 0;

            // Check word, s ki subsequence hai ya nahi
            for(char c : s) {
                if(i < word.size() && c == word[i])
                    i++;
            }

            // Pura word mil gaya
            if(i == word.size()) {

                if(word.size() > ans.size())
                    ans = word;

                // Same length mein lexicographically smaller
                else if(word.size() == ans.size() && word < ans)
                    ans = word;
            }
        }

        return ans;
    }
};