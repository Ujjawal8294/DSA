#include<stdio.h>
int maze(int ir,int ic,int er,int ec){
    int rightshift=0;
    int downshift=0;
    if(ir==er&&ic==ec)
    return 1;
    if(ir==er)
    rightshift+=maze(ir,ic+1,er,ec);
    if(ic==ec)
    downshift+=maze(ir+1,ic,er,ec);
    if(ir<er&&ic<ec){
        rightshift+=maze(ir,ic+1,er,ec);
        downshift+=maze(ir+1,ic,er,ec);
    }
    int total=rightshift+downshift;
    return total;
}
int main(){
int n,m;
printf("Enter no. of rows");
scanf("%d",&n);
printf("Enter no. of column");
scanf("%d",&m);
int total=maze(1,1,n,m);
printf("total no. of ways is %d",total);
}