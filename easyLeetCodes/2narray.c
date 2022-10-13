#include <stdio.h>

int repeatedNTimes(int* nums, int numsSize){
    int n = numsSize / 2;
    int counter = 0;
    int retint = 0;
    int firstHalf = numsSize / 2;
    firstHalf = firstHalf - 1;
    int constantFirstHalf = firstHalf + 1;
    int secondHalf = numsSize / 2;
    for(int i = 0; constantFirstHalf > i ; i++ ){
        if(nums[firstHalf] == nums[secondHalf]){
            retint = nums[i];
            break;
        }
        if(nums[firstHalf - 1] == nums[firstHalf] || nums[firstHalf + 1] == nums[firstHalf]){
            retint = nums[firstHalf];
            break;
        }
        if(nums[secondHalf - 1] == nums[secondHalf] || nums[secondHalf + 1] == nums[secondHalf]){
            retint = nums[secondHalf];
            break;
        }
        firstHalf--;
        secondHalf++;
        }
    return retint;
    }

int main(){
    int numsSize = 6;
    int nums[] = {2,1,2,5,3,2};
    printf("%d\n",repeatedNTimes(nums, numsSize));    
    return 1;

}
