/*
You are given a 2D 0-indexed integer array dimensions.

For all indices i, 0 <= i < dimensions.length, dimensions[i][0] represents the length and dimensions[i][1] represents the width of the rectangle i.

Return the area of the rectangle having the longest diagonal. If there are multiple rectangles with the longest diagonal, return the area of the rectangle having the maximum area.
*/

class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n = dimensions.size();
        int m = dimensions[0].size();
        int area = 0, max_area =0;
        int diag = 0, max_diag = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                diag += pow(dimensions[i][j],2);
                if(max_diag < diag){
                    area = dimensions[i][0]*dimensions[i][1];
                    max_area = area;
                    max_diag = diag; 
                }
                else if(max_diag == diag)
                    area = dimensions[i][0]*dimensions[i][1];
                    if(max_area < area)
                        max_area = area; 
            }
            diag = 0;
        }
    return max_area;
    }
};
