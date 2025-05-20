void sortColors(int* nums, int numsSize) {
    int repeat[3] = {0}; 
    
    // Count frequency of each color
    for (int i = 0; i < numsSize; i++) {
        repeat[nums[i]]++;
    }
    
    // Overwrite nums based on counts
    for (int i = 0; i < numsSize; i++) {
        if (i < repeat[0]) nums[i] = 0; 
             else if (i < repeat[0] + repeat[1])  nums[i] = 1; 
            else  nums[i] = 2;
    }
}
