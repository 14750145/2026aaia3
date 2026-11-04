//week09-1b.cpp 學習計畫 Matrix第2題
//矩陣, 希望把「兩條對角線」上面數字加起來
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int N=mat.size();//矩陣大小
        int ans=0;
        for (int i=0; i<N; i++){//方法2:兩層迴圈
            for(int j=0; j<N; j++){
                //是不是對角線
                if (i==j || i+j==N-1) ans += mat[i][j];
            }
        }
        return ans;
    }
};
