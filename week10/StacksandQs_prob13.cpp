class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        auto comp = [&a](int &p, int &q)       // custom comparator fuction
        {
            return !(a[p] > a[q]);
        };
       priority_queue<int, vector<int> , decltype(comp)> pq(comp);
       vector<int> ans;
       for(int i=0 ; i<a.size() ; i++)
            {
                pq.push(i);
                if(pq.size() >=k )
                {
                    while(pq.size() and pq.top()<i-k+1)
                        pq.pop();
                    ans.push_back(a[pq.top()]);
                }
            }
   return ans;
    }
};