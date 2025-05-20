#include <iostream>
#include <vector>
#include <set>
#include <algorithm> // taken some hints from chatgpt to solve 

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    set<vector<int>> uniqueTriplets; // to avoid duplicate triplets

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (i != j && i != k && j != k) {
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        vector<int> triplet = {nums[i], nums[j], nums[k]};
                        sort(triplet.begin(), triplet.end()); // sort to handle duplicates
                        uniqueTriplets.insert(triplet);       // only unique will be stored
                    }
                }
            }
        }
    }

    // Convert set to vector
    vector<vector<int>> result(uniqueTriplets.begin(), uniqueTriplets.end());
    return result;
}

