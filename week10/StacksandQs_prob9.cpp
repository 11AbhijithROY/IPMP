class StockSpanner {
public:
    stack<pair<int,int>>st;
    StockSpanner() {
        
    }
    
    int next(int price) {
        if(st.empty() || st.top().first>price)
        {
            st.push({price,1});
            return 1;
        }
        else
        {
            int x=1;
            while(!st.empty() && st.top().first<=price)
            {
                x+=st.top().second;
                st.pop();
            }
            st.push({price,x});
            return x;
        }
    }
};