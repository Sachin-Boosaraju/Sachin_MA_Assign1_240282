int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0;

    int j = 1; // pointer for where to place the next unique value
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[i - 1]) {
            nums[j++] = nums[i]; // move the unique value forward
        }
    }
    return j;
}
