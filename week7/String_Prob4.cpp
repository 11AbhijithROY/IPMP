class Solution {
public:
    string reverseWords(string s) {
        string temp, res;
        stack<string> str;
        for(int i = 0;i < s.size();i++){
            if(!temp.empty() && s[i] == ' '){
                str.push(temp);
                temp.clear();
            }
            else if(s[i] != ' '){
                temp += s[i];
            }
        }
        if(!temp.empty()){
            str.push(temp);
        }
        while(!str.empty()){
            res += str.top();
            str.pop();
            res += " ";
        }
        res.pop_back();
        return res;
    }
};

//stringstream
string reverseWords(string A) {
   
    string word,res; 
    stringstream ss(A);
    
    while(ss>>word)
    {
        res=" "+word+res;
    }
  
    return res.substr(1);
}