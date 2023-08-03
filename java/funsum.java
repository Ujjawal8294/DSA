import java.util.Scanner;
public class funsum {
    public static void sum(int a, int b){
        int c=a+b;
        System.out.println("sum is:");
        System.out.print(c);
    }
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        int x=sc.nextInt();
        int y=sc.nextInt();
        sum(x,y);
    }
}
