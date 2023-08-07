class Solution {
public:
	bool searchMatrix(vector<vector<int>>& matrix, int target) {
		size_t nrow = matrix.size(), ncol = matrix[0].size();
		int start = 0, end = nrow * ncol - 1, mid;

		// binary search
		while (end - start > 1) {
			mid = (start + end) / 2;
			if (target > matrix[mid / ncol][mid % ncol]) start = mid;
			else end = mid;
		}

		// check last two elements
		if (target == matrix[end / ncol][end % ncol]) return true;
		else if (target == matrix[start / ncol][start % ncol]) return true;
		else return false;
	}
};