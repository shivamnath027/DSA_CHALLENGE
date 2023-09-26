import java.util.*;
public class code_ninja
{
	public static void main(String[] args) {
	    Scanner s = new Scanner(System.in);
		System.out.println("\nEnter N: ");
		int n = s.nextInt();
		List <Integer> list = new ArrayList<>();
		int val=0;
        for(int i=1;i<=n;i++){
            val=fact(i);
            if(val<=n){
                list.add(val);
            }
            if(val>n){
                break;
            }
        }		
        for(int i=0;i<list.size();i++){
            System.out.println(list.get(i));
        }
	}
	public static int fact(int n){
	    if(n==0 || n==1){
	        return 1;
	    }
	    else{
	        return n*fact(n-1);
	    }
    }
}