//Given a sorted array with possible duplicate elements. Find number of occurrences of input ‘key’ in log N time.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void searchforKey(vector<int> arr, int key) {
    
}
int main() {
    vector<int> arr;
    int size;
    cout<<"\nEnter the size of the array: ";
    cin>>size;
    arr.resize(size);
    int num;
    cout<<"\nEnter the elements: ";
    for(int i = 0;i < size;i++) {
        cin>>num;
        arr.push_back(num);
    }
    sort(arr.begin(), arr.end());
    int key;
    cout<<"\nEnter the key you want to search for in arr: ";
    cin>>key;
    searchforKey(arr, key);
}