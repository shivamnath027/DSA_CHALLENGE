import java.util.Scanner;

class Swapping_binary {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        System.out.println("Enter number to convert: ");
        int n = ip.nextInt();
        if (n == 0) {
            System.out.println(0);
            return;
        }
        int mul = 1, rem = 0, ans = 0;
        while (n > 0) {
            ans = n % 2;
            n = n / 2;
            rem = ans * mul + rem;
            mul = mul * 10;
        }
        System.out.println(rem);
        ip.close();
    }
}