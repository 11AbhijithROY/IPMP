ector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        unordered_map<int, pair<int, int>> umap;
        for(int i = 0;i < arr.size() - 1;i++){
            for(int j = i + 1;j < arr.size();j++){
                umap[arr[i] + arr[j]] = {i,j};
            }
        }
        for(int i = 0;i < arr.size() - 1;i++){
            for(int j = i+1;j < arr.size();j++){
                int sum = arr[i]+arr[j];
                if(umap.find(k - sum) != umap.end()){
                    pair<int, int> p = umap[k - sum];
                    if(p.first != i && p.first != j && p.second != i && p.second != j){
                        return {arr[i], arr[j], arr[p.first], arr[p.second]};
                    }
                }
            }
        }
        return NULL;
    }