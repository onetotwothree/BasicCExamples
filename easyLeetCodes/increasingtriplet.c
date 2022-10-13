bool increasingTriplet(int* nums, int numsSize){
    if(numsSize < 3){
        goto skip;
    }
    bool ret = false;
    int lowest = nums[0];
    int lowestIndex = 0;
    int middle = nums[1];
    int middleIndex = 1;
    int highest = nums[numsSize - 1];
    int highestIndex = numsSize - 1;
    
    for(int i = 1; i < numsSize - 1; i++){
        printf("%i %i %i\n", lowest, middle, highest);
        if(lowest < middle && middle < highest){
            ret = true;
            break;
        }
        if(nums[i] < lowest){
            lowest = nums[i];
            middle = nums[i + 1];
        }
        if(highest < nums[numsSize - 1 - i]){
            highest = nums[numsSize - 1 - i];
        }
        if(nums[i + 1] > lowest && nums[i + 1] < highest){
            middle = nums[i + 1];
        }
    }
    printf("%i %i %i\n", lowest, middle, highest);
    skip:
    return ret;
}
