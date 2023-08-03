import java.util.Scanner;
public class function {
    public static void myName(String name){
        System.out.print(name);
    }
    public static void main(String[]args){
        System.out.print("enter name");
        Scanner sc=new Scanner(System.in);
         String ujj=sc.nextLine();
         myName(ujj);
    }
}
