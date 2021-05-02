static bool cmp(vector<int> &a,vector<int> &b){
        if(a[1]<b[1]) return true;
        else if(a[1]==b[1]){
            return a[0]>b[0]?true:false;
        }
        return false;
    }
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int> p;
        for(int i:nums){
            p[i]++;
        }
        vector<vector<int>> v;
        for(auto i:p){
            v.push_back({i.first,i.second});
        }
        sort(v.begin(),v.end(),cmp);
        vector<int> ans;
        for(auto i:v){
            int j=0;
            while(j<i[1]){
                ans.push_back(i[0]);
                j++;
            }
        }
        return ans;
    }