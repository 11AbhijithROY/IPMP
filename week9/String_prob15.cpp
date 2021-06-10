class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.length();   
        int m=t.length();   
        if(m>n) return "";  
        
        int sh[128]={0};    
        int th[128]={0};
        int cnt=0;          
        bool buf=false;     
        
        int ans=n+1;
        
        for(int i=0;i<m;++i){
            th[t[i]]++;    
        }
        
        string answer_string;   
        int start,end;          
        int r,l;                
        
        for( r=0,l=0;r<n;++r){
            sh[s[r]]++;     
            
            if(sh[s[r]] == th[s[r]] ){  
                cnt+=sh[s[r]];  
            }
            
            while( sh[s[l]] > th[s[l]] && l<r ){    
                sh[s[l]]--;
                l++;
            }
            
            if(cnt==m){
                buf =true;  
                if(r-l+1 < ans){    
                    start=l;
                    end=r;
                    ans=r-l+1;
                }
            }
            
        }
        if(!buf)    return "";
        
        for(int i=start;i<=end;++i)  
            answer_string.push_back(s[i]);
        
        return answer_string;
    }
};