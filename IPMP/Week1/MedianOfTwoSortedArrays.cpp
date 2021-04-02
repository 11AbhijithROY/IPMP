#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       vector<int> arr;
        int i = 0;
        for(i = 0;i < nums1.size();i++) {
            arr[i] = nums1[i];
        }
        for(i = nums1.size() - 1;i < nums1.size() + nums2.size();i++) {
            arr[i] = nums2[i - nums1.size()];
        }
        for(int i=0;i<nums1.size()+nums2.size();i++)
        {
            for(int j=0;j<(nums1.size()+nums2.size()-i);j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int t;
                    t=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=t;
                }
            }
        }

        if((nums1.size()+nums2.size())%2==0)
        {
            int k =(nums1.size()+nums2.size())/2;
            double kk = (arr[k+1]+arr[k])/2.0;
            return kk;   
        }
        else
        {
            int k =floor((nums1.size()+nums2.size())/2);
            return arr[k+1];
        } 
    }
};