import java.util.Scanner;
public class tower {
    public static void towerof(int x,char s,char h,char d){
     if(x==0) return;
     towerof(x-1,s,d,h);
     System.out.println(s + "->" + d);
     towerof(x-1,h,s,d);
    }
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        char A='A';char B='B';char C='C';
        towerof(n,A,B,C);
    }
}
