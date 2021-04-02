#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i, index = 0, count = 1;
    for(i = 1; i < nums.size(); i++) {
        if(nums[index] == nums[i])
            count++;
        else
            count--;
         
        if(count == 0) {
            index = i;
            count = 1;
        }
    }
    count = 0;
    for (i = 0; i < nums.size(); i++) {
        if(nums[i] == nums[index])
            count++; 
 }
    if(count > (nums.size()/2))
       return nums[index];
    else
        return -1;
}
};