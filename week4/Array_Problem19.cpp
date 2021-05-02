class Solution
{
    public:
        int closestToZero(int arr[], int n)
        {
            // your code here 
            sort(arr, arr + n);
            int minsum = INT_MAX, sum;
            int l = 0, r = n - 1;
            while(l < r){
                sum = arr[l] + arr[r];
                if(abs(sum) < abs(minsum))
                    minsum = sum;
                else if(sum < 0)
                    l++;
                else
                    r--;
            }
        return minsum;
        }
};