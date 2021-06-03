class Solution {
public:
    #define NO_OF_CHARS 256
    bool isAnagram(string s, string t) {
        int count[NO_OF_CHARS] = { 0 };
        int i;
        for(i = 0;s[i] && t[i];i++){
            count[s[i]]++;
            count[t[i]]--;
        }
        if(s[i] || t[i])
            return false;
        for(i = 0;i < NO_OF_CHARS;i++){
            if(count[i])
                return false;
        }
        return true;
    }
};