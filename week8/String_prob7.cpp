int fact(int n)
{
    return (n <= 1) ? 1 : n * fact(n - 1);
}

void populateAndIncreaseCount(int* count, char* str)
{
    int i;
    for (i = 0; str[i]; ++i)
        ++count[str[i]];
    for (i = 1; i < MAX_CHAR; ++i)
        count[i] += count[i - 1];
}

void updatecount(int* count, char ch)
{
    int i;
    for (i = ch; i < MAX_CHAR; ++i)
        --count[i];
}

int findRank(char* str)
{
    int len = strlen(str);
    int mul = fact(len);
    int rank = 1, i;
    int count[MAX_CHAR] = { 0 };
    populateAndIncreaseCount(count, str);
    for (i = 0; i < len; ++i) {
        mul /= len - i;
        rank += count[str[i] - 1] * mul;
        updatecount(count, str[i]);
    }
    return rank;
}