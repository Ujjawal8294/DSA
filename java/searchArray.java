import java.util.Scanner;
public class searchArray {
    public static void main (String[]args){
    Scanner sc=new Scanner(System.in);
     int rows=sc.nextInt();
     int columns=sc.nextInt();
     int se=5,loci=-1,locj=-1,i,j;
     int arr[][]=new int[rows][columns];
     for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            arr[i][j]=sc.nextInt();
        }
     }
     for(i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            if(se==arr[i][j]){
                loci=i;
                locj=j;
                break;
            }
        }
     }
     System.out.println("location of rows:"+ loci );
     System.out.print("location of columns:"+ locj);
}
}