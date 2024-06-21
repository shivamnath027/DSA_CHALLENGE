import java.util.Scanner;

class binary_search {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        System.out.print("N: ");
        int n = ip.nextInt();
        System.out.println("Enter Elements: ");
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = ip.nextInt();
        }
        System.out.println("Enter Key: ");
        int key = ip.nextInt();
        int low = 0;
        int high = n - 1;
        int mid;
        boolean flag = false;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (a[mid] == key) {
                System.out.printf("\nElement found at %s Position", mid + 1);
                flag = true;
                break;
            } else if (a[mid] < key) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        if (!flag) {
            System.out.println("Element not found");
        }
    }
}