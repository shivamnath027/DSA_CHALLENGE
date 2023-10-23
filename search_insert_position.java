class search_insert_position{
    public int searchInsert(int[] nums, int target) {
        int low=0,high= nums.length-1;
        int index = nums.length,mid=0;
        while(low<=high){
            mid = (low+high)/2;
            if(nums[mid]==target){
                index = mid;
                break;
            }
            else if(nums[mid]<target){
                low = mid+1;
            }
            else{
                high = mid-1;
                index = mid;
            }
        }
        return index;
    }
}