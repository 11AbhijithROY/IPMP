#include<iostream>
#include<vector>
using namespace std;

int binsearch(vector<int> arr, int l, int r, int key) {
    int m;
    m = l + (r-1)/2;
    while(l <= r){
        m = (l+r)/2;
        if(arr[m] == key) {
            return m;
        }
        if(arr[m] < key){
            return binsearch(arr, m + 1, r, key);
        }
        return binsearch(arr, l, m - 1, key);
    }
    return -1;
}
void floorandceilofelem(vector<int> arr, int n, int x) {
    //array already sorted
    int l = 0, r = n - 1;
    int flag = binsearch(arr, l, r, x);
    if(flag != -1) {
        cout<<"\nfloor of "<<x<<" is "<<arr[flag - 1];
        cout<<"\nfloor of "<<x<<" is "<<arr[flag + 1];
    }
    else
    {
            cout<<"\nThe element is not present in the array";
    }
    
}
int main() {
    vector<int> arr;
    int size, num;
    cout<<"\nEnter the size of the array: ";
    cin>>size;
    arr.resize(size);
    cout<<"\nEnter the elements of the array: ";
    for(int i = 0;i < size;i++) {
        cin>>num;
        arr.push_back(num);
    }
    int x;
    cout<<"\nEnter the element of which you want to find the efloor and ceil of? ";
    cin>>x;
    floorandceilofelem(arr, size, x);
}