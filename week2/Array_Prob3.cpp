int MissingNumber(vector<int>& array, int n) {
    // Your code goes here
    int a = 1;
    int b = array[0];
    for(int i = 1;i < n;i++) {
        b = b ^ array[i];
    }
    for(int i = 2;i <= n + 1;i++)
        a = a ^ i;
    return (a ^ b);
}