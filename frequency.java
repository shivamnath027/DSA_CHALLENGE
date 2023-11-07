import java.util.Scanner;
import java.util.HashMap;

public class frequency {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        System.out.println("Enter N: ");
        int n = ip.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter Elements: ");
        for (int i = 0; i < n; i++) {
            arr[i] = ip.nextInt();
        }
        HashMap<Integer, Integer> hm = new HashMap<>();
        for (int i = 0; i < n; i++) {
            if (hm.get(arr[i]) == null) {
                hm.put(arr[i], 0);
            } else {
                int a = hm.get(arr[i]);
                hm.put(arr[i], ++a);
            }
        }
        System.out.println("Keys:");
        for (Integer key : hm.keySet()) {
            System.out.println(key);
        }

        // Iterating through values
        System.out.println("\nValues:");
        for (Integer value : hm.values()) {
            System.out.println(value);
        }
    }
}