class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>stk;
        for(int i=0;i<s.length();i++)
        {
            bool found=false;
            while(!stk.empty() && stk.top()==s[i])
            {
                stk.pop();
                found=true;
            }
            if(!found)
            {
                stk.push(s[i]);
            }
        }
        s="";
        while(!stk.empty())
        {
            s.push_back(stk.top());
            stk.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};