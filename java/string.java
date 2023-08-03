import java.util.Scanner;
public class string {
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        String firstName="ujjawal";
        String lastname="kumar";
        //concatenation;
        String Fullname=firstName + " " +lastname;
       System.out.println(Fullname.length()); 
              System.out.println(Fullname);
              int i;
              //charAt;
              for(i=0;i<Fullname.length();i++){
                System.out.println(Fullname.charAt(i));
              } 
              //compareTo;
              if(firstName.compareTo(lastname)==0){
                System.out.println("equal");
              }
                else{
                    System.out.println("not equal");
                }
                //substring;
              String ne=Fullname.substring(5,12);
              System.out.println(ne);
              StringBuilder sb=new StringBuilder("Tony");
              sb.setCharAt(0,'P');
              System.out.println(sb);
              sb.insert(0,'S');
              System.out.println(sb);
              sb.delete(0,1);
              System.out.println(sb);

    }
}
