import java.util.Scanner;
public class multifun {
    public static int mult(int a,int b){
        int mul=a*b;
        return mul;
    }
    public static void main(String[]args)
{
    Scanner sc=new Scanner(System.in);
    int x=sc.nextInt();
    int y=sc.nextInt();
    int z=mult(x,y);
    System.out.print("product is "+ z);
}}
