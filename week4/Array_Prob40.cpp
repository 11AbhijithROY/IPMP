class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<vector<int>> res;
        for(int i = 0;i < mat.size();i++) {
            for(int j = 0;j < mat[i].size();j++){
                res[i + j].push_back(mat[i][j]);
            }
        }
        for (int i = 0; i < res.size(); i++)
        {   
            for (int j = 0; j < res[i].size(); j++)
                cout << res[i][j] << " ";
            cout << endl;
        }
    }
};