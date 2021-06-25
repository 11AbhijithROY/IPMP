void bt(string s, int pos, vector<string> comb){
        if(pos >= s.size()){
            for(auto x:comb) cout<<x;
            cout<<endl;
            return;
        }
        
        comb.push_back("(");
        comb.push_back(s.substr(pos,1));
        comb.push_back(")");
        bt(s, pos + 1, comb);
        comb.pop_back();
        comb.pop_back();
        comb.pop_back();
        
        for(int step = 2; pos + step <= s.size(); step++){
                comb.push_back("(");
                comb.push_back(s.substr(pos, step));
                comb.push_back(")");
                bt(s, pos + step, comb);
                comb.pop_back();
                comb.pop_back();
                comb.pop_back();
        }
    }