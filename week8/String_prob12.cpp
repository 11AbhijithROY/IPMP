string removeDirtyChars(string str1, string str2)
{
    int* count = getcountarray(str2);
    string res;
    int ip_idx = 0;
    while (ip_idx < str1.size())
    {
        char temp = str1[ip_idx];
        if (count[temp] == 0)
        {
            res.push_back(temp);
        }
        ip_idx++;
    }
    return res;
}