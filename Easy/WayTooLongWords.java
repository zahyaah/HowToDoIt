import java.util.Scanner;
import java.lang.String;
public class WayTooLongWords {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String ask, answer = "";
        int ts = in.nextInt();
        for (int i = 0; i < ts+1; i++) {
            ask = in.nextLine();
            if (ask.length()<=10) System.out.println(ask);
            else {
                answer = "" + ask.charAt(0) + String.valueOf(ask.length()-2) + ask.charAt(ask.length()-1);
                System.out.println(answer);
            }
        }
    }
}