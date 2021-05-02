double waterOverflow(int K, int R, int C) {
        // code here
        if(C > R){
            return NULL;
        }
        double glass[C*(C + 1)/2];
        memeset(glass, 0, sizeof(glass));
        int index = 0;
        glass[index] = K;//1st glass gets K units
        for(int row = 1;row <= R;row++){
            for(int col = 1;col <= C;col++){
                K = glass[index];
                glass[index] = (K >= 1) ? 1.00 : K;
                K = (K >= 1) ? (K - 1) : 0.00;
                
                glass[index + row] += K / 2;
                glass[index + row + 1] += K / 2;
            }
        }
        return glass[i*(i-1)/2 + j - 1];
    }