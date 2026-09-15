class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        vector<vector<char>> bucket(s.size() + 1);

        for (char c : s)
            freq[c]++;

        for (auto &[c, f] : freq)
            bucket[f].push_back(c);

        string ans;
        for (int f = s.size(); f > 0; --f)
            for (char c : bucket[f])
                ans.append(f, c);

        return ans;
    }
};