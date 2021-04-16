pair<int,int> twoRepeated (int arr[], int N)
    {
        // Your code here
        int count[];
        pair<int, int> res;
        for(int i = 0;i < N + 2;i++) {
            if(count[arr[i]] == 1){
                res.push_back(arr[i]);
                if(res.size() > 2)
                    break;
            }
            else
                count[arr[i]]++;
        }
        return res;
    }