//two pointer technique
bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    int l = 0;
	    int r = n - 1;
	    sort(arr, arr + n);
	    while(l < r){
	        if(arr[l] + arr[r] > x){
	            r--;
	        }
	        else if(arr[l] + arr[r] < x){
	            l++;
	        }
	        else {
	            return true;
	        }
	    }
	    return false;
	}
//hash method
bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    unordered_set<int> us;
	    for(int i = 0;i < n;i++){
	        int temp = x - arr[i];
	        if(us.find(temp) != us.end()) {
	            return true;
	        }
	        us.insert(arr[i]);
	    }
	    return false;
	}
//leetcode prob
vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        for(int i = 0;i < nums.size();i++)
                umap[nums[i]] = i;
        for(int i = 0;i < nums.size();i++){
            if(umap.find(target - nums[i]) != umap.end() && umap[target - nums[i]] != i)
                return {i, umap[target - nums[i]]};
            }
        return {-1};
    }