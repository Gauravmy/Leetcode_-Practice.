class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {

        string ans = "";

        for(string word : dictionary) {

            int i = 0, j = 0;

            // Check karo word, s ki subsequence hai ya nahi
            while(i < s.size() && j < word.size()) {

                if(s[i] == word[j])
                    j++;        // character match ho gaya

                i++;            // s mein aage badho
            }

            // Pura word mil gaya
            if(j == word.size()) {

                // Word longer hai
                if(word.size() > ans.size())
                    ans = word;

                // Same length hai to lexicographically smaller lo
                else if(word.size() == ans.size() && word < ans)
                    ans = word;
            }
        }

        return ans;
    }
};