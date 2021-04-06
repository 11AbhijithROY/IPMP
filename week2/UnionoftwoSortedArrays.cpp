int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int newTable[100], count = 1;
        newTable[a[0]]++;
        for(int i = 1;i < n;i++) {
            if(a[i] != a[i-1]){
                count++;
                newTable[a[i]]++;
            }
        }
        for(int i = 0;i < m;i++) {
            if(newTable[b[i]] == 0){
                count++;
                newTable[b[i]]++;
            }
        }
    return count;
    }