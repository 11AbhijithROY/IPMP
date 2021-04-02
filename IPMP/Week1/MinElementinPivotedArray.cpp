#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

int findMin(vector<int>& nums) {
	int answer = nums[0];
    int left = 0;
    int right = nums.size() - 1;
    int middle;

    while (left < right) {
        middle = (left + right) / 2;
        answer = min(answer, nums[left]);

        if (nums[middle] < nums[left]) {
            right = middle;
        } else {
            left = middle + 1;
        }
    }

    return min(answer, nums[left]);
}