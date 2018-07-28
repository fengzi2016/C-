class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
         int cn = matrix[0].size();
        int rn = matrix.size();
        int m[rn*cn][2];
        int i,j,k,x,y,z;
        k = 0;
        for(i=0;i<rn;i++) {
            for(j=0;j<cn;j++) {
                if(matrix[i][j]==0) {
                    m[k][0] = i;
                    m[k][1] = j;
                    k++;
                }
            }
        }
        //行成0
      for(i=0;i<k;i++) {
          for(x=0;x<cn;x++) {
              matrix[m[i][0]][x] = 0;
        }  
      }
        //列成0
        for(i=0;i<k;i++) {
            for(x=0;x<rn;x++) {
              matrix[x][m[i][1]] = 0;
            }  
        }
        
    }
};