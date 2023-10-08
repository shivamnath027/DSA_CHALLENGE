import java.io.*;
import java.util.*;

class armstrong
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while(t-- > 0)
        {
            int N = Integer.parseInt(read.readLine());
            Solution ob = new Solution();
            System.out.println(ob.isNarcissistic(N));
        }
    }
}
class Solution{
    static int isNarcissistic(int N){
        // code her
        int sum=0,rem,n=N,count=0;
        while(n!=0){
            rem = n%10;
            count++;
            n=n/10;
        }
        n=N;
        while(n!=0){
            rem = n%10;
            n = n/10;
            sum+= Math.pow(rem,count);
        }
        if(sum==N){
            return 1;
        }
        else{
            return 0;
        }
    }
}
//see only the function the driver code is imported from GFG as  Narcisist number