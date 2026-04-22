// 1. 2nd best solution with space O(m + n)
//  here we are using two arrays to remember the 0 in the specific row or col 
#include <vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = (m > 0) ? matrix[0].size() : 0;
        vector<bool> row(m, false);
        vector<bool> col(n, false);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if(matrix[i][j] == 0){
                    row[i] = true;
                    col[j] = true;
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if(row[i]==true || col[j] ==true){
                    matrix[i][j]=0;
                }
            }   
        }

    }
};


// OPTIMAL solution sapce = 0(1)
// the idea here is to use the row and the coloumn number 1 of both to use it as memory

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = (m > 0) ? matrix[0].size() : 0;
        bool rowinpact = false ;
        bool colinpact = false ;
        for ( int col = 0 ; col < n ; col++){
            if(matrix[0][col]==0){
                rowinpact = true;
            }
        }
        for ( int row = 0 ; row < m ; row++){
            if(matrix[row][0]==0){
                colinpact = true;
            }
        }

        for(int i=1; i<m ;i++){
            for(int j=1 ;j<n ;j++){
                if(matrix[i][j]==0){
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }

        for(int i=1; i<m ;i++){
            for(int j=1 ;j<n ;j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }

        if(rowinpact){
            for(int col =0 ;col<n ;col++){
                matrix[0][col]=0;
            }
        }
        if(colinpact){
            for(int row =0 ;row<m ;row++){
                matrix[row][0]=0;
            }
        }      

    }
};