int trap(vector<int>& height)
{
    int ans = 0, current = 0;
    stack<int> st;
    while (current < height.size()) {
        while (!st.empty() && height[current] > height[st.top()]) {
            int top = st.top();
            st.pop();
            if (st.empty())
                break;
            int horizontal = current - st.top() - 1;
            int vertical = min(height[current], height[st.top()]) - height[top];
            ans += horizontal * vertical;
        }
        st.push(current++);
    }
    return ans;
}