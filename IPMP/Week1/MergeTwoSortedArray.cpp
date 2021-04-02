//Merge Two sorted arrays into the first one
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums(m);
        for(int i=0;i<m;i++)
            nums[i]=nums1[i];
        int i = 0, j=0;
        while(i < m && j < n){
            if(nums[i]<=nums2[j]){
                nums1[i+j]=nums[i];
                i++;
            }
            else{
                nums1[i+j]=nums2[j];
                j++;
            }
        }
        while(i<m)
            nums1[i+j-1]=nums[i++];
        while(j<n)
            nums1[i+j-1]=nums2[j++];
        return;
    }