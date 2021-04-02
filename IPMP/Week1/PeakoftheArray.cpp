//Find an element in an array upto which the array increases it value and then decreases using binary search

int findPeek(int arr[], int l, int r)
{
    if (l == r)
        return arr[l];
    if ((r == l + 1) && arr[l] >= arr[r])
        return arr[l];
    if ((r == l + 1) && arr[l] < arr[r])
        return arr[r];
    int m = (l + r)/2;
    if ( arr[m] > arr[m + 1] && arr[m] > arr[m - 1])
        return arr[m];
    if (arr[m] > arr[m + 1] && arr[m] < arr[m - 1])
        return findPeek(arr, l, m-1);
    else
        return findPeek(arr, m + 1, r);
}
 