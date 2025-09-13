class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        ///AMAZON , ADOBE
        vector<vector<int>> result(numRows); 
        for(int i=0;i<numRows;i++){
            result[i]=vector<int> (i+1,1);  //intialize-> 1
            for(int j=1;j<i;j++){
                result[i][j]=result[i-1][j]+result[i-1][j-1]; //upar + left value
            }
        }
        return result; 
        //application=> nCr=> nthrow and rth column par mil jayega answer
        
    }
};