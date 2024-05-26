// problem link
// https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/description/

class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int arr[m][n];

        for(int i = 0;i < m;i++){
            for(int j = 0;j < n;j++){
                arr[i][j] = 0;
            }
        }
        for(int i = 0;i < indices.size();i++){
            int x = indices[i][0];
            int y = indices[i][1];

            for(int j = 0;j < n;j++){
                arr[x][j]++;
            }

            for(int j = 0;j < m;j++){
                arr[j][y]++;
            }
        }

        int count = 0;

        for(int i = 0;i < m;i++){
            for(int j = 0;j < n;j++){
                // cout << arr[i][j] << " ";
                if(arr[i][j]%2 == 1){
                    count++;
                }
            }
        }
        return count;
    }
};
