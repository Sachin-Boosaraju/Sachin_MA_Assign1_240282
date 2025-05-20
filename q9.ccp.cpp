#include <iostream>
#include <algorithm> 
using namespace std;

void nextPermutation(int* nums, int numsSize) {
    int i, j;

    for (i = numsSize - 2; i >= 0; i--) { // getting  first pair (i, i+1) from the end where nums[i] < nums[i+1]
        if (nums[i] < nums[i + 1]) {
            break;
        }
    }

    if (i >= 0) {
        for (j = numsSize - 1; j > i; j--) { // Find the next bigger element than nums[i] from the end
            if (nums[j] > nums[i]) {
                break;
            }
        }
        // Swap nums[i] and nums[j]
        swap(nums[i], nums[j]);
    }

    
    int left = i + 1;
    int right = numsSize - 1;
    while (left < right) {               //   if no such pair found, Reverse the part after i
        swap(nums[left], nums[right]);
        left++;
        right--;
    }


    for (int i = 0; i < numsSize; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;


}

