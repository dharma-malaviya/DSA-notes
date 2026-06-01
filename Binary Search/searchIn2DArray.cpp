#include<iostream>
#include<vector>
using namespace std;

    bool searchInRow(vector<vector<int>> &matrix, int target, int row){   //TC->O(logn)
        int n = matrix[0].size();
        int st=0, end=n-1;

        while(st <= end){
            int mid = st+(end-st)/2;

            if(matrix[row][mid] == target){
                return true;
            }
            else if(matrix[row][mid] >= target){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {  //TC->O(logm)
        int m=matrix.size();
        int n=matrix[0].size();
        int SR=0, ER=m-1;

        while(SR <= ER){
            int MR = SR+(ER-SR)/2;

            if(matrix[MR][0] <= target && target <= matrix[MR][n-1]){
                return searchInRow(matrix, target, MR);
            }
            else if(target <= matrix[MR][0]){
                ER = MR-1;
            }
            else{
                SR = MR+1;
            }
        }
      return false;  
    }

int main() {
    vector<vector<int>> matrix = {{1,3,5,7}, {10,11,16,20}, {23,30,34,60}};
    int target = 34;
    cout << searchMatrix(matrix, target);
    return 0;
}
