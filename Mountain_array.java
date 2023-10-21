class Solution {
    public int peakIndexInMountainArray(int[] arr) {
        int low=0,high=arr.length-1,mid;
        int val=0;
        while(low<=high){
            // mid = low + (high-low)/2;
            // TO HANDLE ARRAY OUT OF BOUND EXCEPTION USE OTHER FORMULA FOR MID
            mid = high+(low-high)/2;
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
                val = mid;
                break;
            }
            else if(arr[mid-1]<arr[mid]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return val;
    }
}