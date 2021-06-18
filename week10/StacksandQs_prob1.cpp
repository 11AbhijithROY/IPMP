class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<int> s;
        int index =0;
        vector<string> ans;
        for(int i = 1;i <= n;i++){
            s.push(i);
            ans.push_back("Push");
            if(s.top() == target[index]){
                index++;
            }
            else {
                s.pop();
                ans.push_back("Pop");
            }
            if(index == target.size())
                break;
        }
        return ans;
    }
};