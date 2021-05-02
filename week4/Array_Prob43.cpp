int maxSubarrayProduct(int arr[], int n)
{
    int result = arr[0];
    for (int i = 0; i < n; i++)
    {
        int mul = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            result = max(result, mul);
            mul *= arr[j];
        }
        result = max(result, mul);
    }
    return result;
}