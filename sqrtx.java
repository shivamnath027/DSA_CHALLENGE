class sqrtx {
    public int mySqrt(int x) {
        if(x<2){
            return x;
        }
        int low=1, high = x,ans=0,mid=0;
        while(low<=high){
            mid = low + (high-low)/2;
            if(x/mid==mid){
                ans=mid;
                break;
            }
            else if(mid>x/mid){
                high = mid-1;
            }
            else{
                ans = mid;
                low = mid+1;
            }
        }
        return ans;
    }
}