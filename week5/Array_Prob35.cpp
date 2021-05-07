//Set 0s on the rows and cols where mat[i][j] == 0
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool firstRow = false, firstCol = false;
        for(int i = 0;i < matrix.size();i++){
            for(int j = 0;j < matrix[i].size();j++){
                if(matrix[i][j] == 0){
                    if(i == 0)
                        firstRow = true;
                    if(j == 0)  
                        firstCol = true;
                    matrix[i][0] = matrix[0][j] = 0;
                }
            }
        }
        for(int i = 1;i < matrix.size();i++) {
            for(int j = 1;j < matrix[i].size();j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        if(firstRow){
            for(int j = 0;j < matrix[0].size();j++){
                matrix[0][j] = 0;
            }
        }
        if(firstCol) {
            for(int i = 0;i < matrix.size();i++){
                matrix[i][0] = 0;
            }
        }
    }
};