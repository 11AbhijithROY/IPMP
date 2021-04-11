//Hashing method
int getOddOccurrence(int arr[], int n) {
        // code here
        unordered_map<int, int> umap;
        for(int i = 0;i < n;i++) {
            umap[arr[i]]++;
        }
        for(auto i : umap) {
            if(i.second%2 != 0) {
                return i.first;
            }
        }
        return -1;
    }
//XOR method - better method
int getOddOccurrence(int arr[], int n) {
        // code here
        int res = 0;
        for(int i = 0;i < n;i++)
            res = res ^ arr[i];
    return res;
    }