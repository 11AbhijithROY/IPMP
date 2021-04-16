void segregateEvenOdd(int arr[], int n) {
	    // code here
	    int l = 0, r = n - 1;
	    while(l < r){
	        while(arr[l]%2 == 0 && l < r){
	            l++;
	        }
	        while(arr[r]%2 == 1 && l < r){
	            r--;
	        }
	        if(l < r){
	            swap(arr[l], arr[r]);
	            l++;
	            r--;
	        }
	    }
	}

//stable partition
void rearrangeEvenAndOdd(vector<int>v)
{
    stable_partition(v.begin(), v.end(),
                     [](auto a) { return a % 2 == 0; });
    for (int num : v)
        cout << num << " ";
}