public class Sec_largest {
    public static int[] getSecondOrderElements(int n, int []a) {
        // Write your code here.
        int max= Integer.MIN_VALUE,max_index=0;
        for(int i=0;i<n;i++){
            if(a[i]>max){
                max=a[i];
                max_index=i;
            }
        }
        
        int sec_max=Integer.MIN_VALUE;
        for(int i=0;i<n;i++){
            if(a[i]>sec_max && i!=max_index){
                sec_max = a[i];
            }
        }
        int min = Integer.MAX_VALUE;
        int min_index=0;
        for(int i=0;i<n;i++){
            if(a[i]<min){
                min = a[i];
                min_index = i;
            }
        }
        int sec_min=Integer.MAX_VALUE;
        for(int i=0;i<n;i++){
            if(a[i]<sec_min && i!=min_index){
                sec_min = a[i];
            }
        }
        int[] ans = new int[2];
        ans[0] = sec_max;
        ans[1] = sec_min;
        return ans;
    }
}