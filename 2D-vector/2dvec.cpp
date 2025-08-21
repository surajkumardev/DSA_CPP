class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        // a and b 
        // a -> exctly ones , b=> twice
        vector<int> vec; 
        //create a 2d vector 
        vector<vector<int>> vec(n); ///create a 2d array 
        //push 
        vec[0].push_back(19);
        vec[1].push_back(10); 


        //another way 
        vector<vector<int>> vec(n, vector<int> (m, 0)); 


        
        int n=grid.size(); 


        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                    //traversing 
                    cout<<grid[i][j]<<" "; 
                    //now the code 

            }
        }
    }
};