  public:
    int findCoverage(vector<vector<int>>& matrix) {
        // Code here
        int count=0;
        int row=matrix.size(),col=matrix[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    if(i-1>=0 && matrix[i-1][j]==1) count++;
                    if(i+1<row && matrix[i+1][j]==1) count++;
                    if(j-1>=0 && matrix[i][j-1]==1) count++;
                    if(j+1<col && matrix[i][j+1]==1) count++;
                }
            }
        }
        return count;
    }
};
