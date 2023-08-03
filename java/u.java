import java.util.Scanner;
public class u{
    public static void main(String[] args){
     System.out.println("helllo ujjawal");
     Scanner sc =new Scanner(System.in);
     int a=sc.nextInt();
     System.out.println(a);
     int i,j;
     for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            System.out.print("*");
        }
        System.out.println(" ");
     }
    }
}