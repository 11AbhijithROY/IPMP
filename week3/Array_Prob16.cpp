vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> res;
        int mindiff;
        if(arr.size() > 1)
            mindiff = arr[1] - arr[0];
        for(int i = 1;i < arr.size();i++){
            int diff = arr[i] - arr[i-1];
            if(diff == mindiff) res.push_back({arr[i - 1], arr[i]});
            else if(diff < mindiff){
                mindiff = diff;
                res.clear();
                res.push_back({arr[i - 1], arr[i]});
            }
        }
    return res;
    }