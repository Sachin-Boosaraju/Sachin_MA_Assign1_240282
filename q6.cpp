#include <iostream>
#include <vector>
using namespace std ; // taken help from chatgpt for idea approach 

vector<int> spiralOrder(const vector<vector<int>>& matrix) {
    if (matrix.empty()) return {};

    int rows = matrix.size();
    int cols = matrix[0].size();

    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;

    vector<int> result;
    result.reserve(rows * cols);  

    while (top <= bottom && left <= right) {
        // Traverse left to right
        for (int col = left; col <= right; ++col)
            result.push_back(matrix[top][col]);
        ++top;

        // Traverse top to bottom
        for (int row = top; row <= bottom; ++row)
            result.push_back(matrix[row][right]);
        --right;

        // Traverse right to left
        if (top <= bottom) {
            for (int col = right; col >= left; --col)
                result.push_back(matrix[bottom][col]);
            --bottom;
        }

        // Traverse bottom to top
        if (left <= right) {
            for (int row = bottom; row >= top; --row)
                result.push_back(matrix[row][left]);
            ++left;
        }
    }

    return result;
}