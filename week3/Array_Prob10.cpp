bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        for(int i = 0;i < n - 2;i++) {
        unordered_set<int> s;
        int curr_sum = X - A[i];
        for(int j = i + 1;j < n;j++) {
            if(s.find(curr_sum - A[j]) != s.end()) {
                return true;
            }
            s.insert(A[j]);
        }
    }
    return false;
    }