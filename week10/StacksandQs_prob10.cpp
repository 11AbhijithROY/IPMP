class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& n1, vector<int>& n2) {
        // support variables
        int len1 = n1.size(), len2 = n2.size();
        vector<int> res(len1, -1);
        if (!len2) return res;
        int dp[len2];
        stack<int> s;
        unordered_map<int, int> matches;
        // marking all the necessary keys in matches
        for (auto n: n1) matches[n] = -1;
        // going to populate both the dp table and
        for (int i = len2 - 1, n; i >= 0; i--) {
            n = n2[i];
            // updating matches if it is a necessary key for later
            if (matches.find(n) != end(matches)) {
                matches[n] = i;
            }
            // working with the stack to populate dp
            while (s.size() && s.top() <= n) s.pop();
            if (!s.size()) dp[i] = -1;
            else dp[i] = s.top();
            s.push(n);
        }
        for (int i = 0; i < len1; i++) {
            res[i] = dp[matches[n1[i]]];
        }
        return res;
    }
};