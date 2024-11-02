class Solution {
public:
    bool binarySearch(vector<int> arr, int target) {
        int n = arr.size();
        int l = 0, h = n - 1;
        while(l <= h) {
            int m = (l + h) / 2;
            if(arr[m] == target)
                return true;
            if(target > arr[m])
                l = m + 1;
            else
                h = m - 1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        for(int i = 0; i < m; i++) {
            vector<int> arr = matrix[i];
            if(target < arr[0])
                return false;
            if(target > arr[arr.size() - 1])
                continue;
            return binarySearch(arr, target);
        }
        return false;
    }
};