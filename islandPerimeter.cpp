#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int islandPerimeter(vector<vector<int>> &grid)
    {

        int perimeter = 0;
        int row = grid.size();
        int col = grid[0].size();
        int peri_to_reduce = 0;

        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++){
                if (grid[i][j] == 1){
                    perimeter += 4; 
                    if ((j + 1 < col) && grid[i][j + 1] == 1){
                         // now , check the right side of the current cell whether it is filled with water or not , if yes reduce that peri by 2 as they share the common sides
                        peri_to_reduce += 2;
                    }

                    if ((i + 1 < row) && grid[i + 1][j] == 1)
                    { // same reason as above , but now check for bottom of the current cell for water == 1 , reduce by two

                        peri_to_reduce += 2;
                    }
                }
            }
        }

        return (perimeter - peri_to_reduce); // return the difference btwn the original and the reduced perimeter
    }
};