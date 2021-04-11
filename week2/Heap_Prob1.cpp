//sort a nearly sorted array or a k array
//method - heap data structure
#include <bits/stdc++.h>
using namespace std;
int arr[100];
void insertelem(int N){
    for(int i = 0;i < N;i++){
        cin>>arr[i];
    }
}
void printarr(int N){
    for(int i = 0;i < N;i++) {
        cout<<arr[i]<<" ";
    }
}
void sortK(int N, int K){
    priority_queue<int, vector<int>,greater<int>> pq(arr, arr + K + 1);
    int index = 0;
    for(int i = K + 1;i < N;i++) {
        arr[index++] = pq.top();
        pq.pop();
        pq.push(arr[i]);
    }
    while(pq.empty() == false){
        arr[index++] = pq.top();
        pq.pop();
    }
    printarr(N);
}
int main() {
	//code
	int T;
	cin>>T;
	while(T--){
	    int N, K;
	    insertelem(N);
	    sortK(N, K);
	}
	return 0;
}