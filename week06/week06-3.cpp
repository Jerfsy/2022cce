int removeDuplicates(int* nums, int numsSize){
    int k=1;
    for(int i=1; i<numSize; i++){
        if( num[i-1]==num[i]){

        }else{
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}
