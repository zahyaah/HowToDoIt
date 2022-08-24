import java.util.Scanner;
public class Hulk {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int ask = in.nextInt();
        if (ask == 1) System.out.print("I hate it ");
        else {
            int i;
            for (i = 1; i < ask; i++) {
                if (i%2 != 0) System.out.print("I hate that ");
                else System.out.print("I love that ");
            }
            if (i%2 != 0) System.out.print("I hate it ");
            else System.out.print("I love it ");
        }
    }
}