#include<stdio.h>
#define max 10
int r1=max,f1=-1,r2=max,f2=-1;
int q[max];
int item;
void rearI(int item);
void frontI(int item);
void rearD();
void frontD();
int main(){
int n;
do{
    printf("enter 1 for rear insert\t enter 2 for rear delete \t  enter 3 for frontinsert\t enter 4 for front delete \t enter 5 for exit\n");
    scanf("%d",&n);
    switch(n){
        case 1:printf("enter element for rear");
               scanf("%d",&item);
               rearI(item);
               break;
        case 2:rearD();
               break;
        case 3:printf("enter element for front insert\n");
               scanf("%d",&item);
               frontI(item);
               break;
        case 4:frontD();
               break;
        case 5:printf("Exiting\n");
               break;
             
    }
}
while(n!=5);
}
void rearI(int item){
    if(r1-1==f1){
        printf("Overflow\n");
    }
    else if(r1==max&&r2==max){
            r1=max-1;
            r2=max-1;
        }
        else{
    r1=r1-1;
        }
        q[r1]=item;
}
void rearD(){
    if(r2==max){
        printf("underflow\n");
    }
    else{ 
        item=q[r2];
        if(r2==r1){
        r2=max;
        r1=max;
    }
    else {
        
        r2--;
    }
    }
        printf("rear delete item is %d\n",item);
}
void frontI(int item){
    if(f1+1==r1){
        printf("overflow\n");
    }
    else if(f1==-1&&f2==-1){
            f1++;
            f2++;
        }
        else{
        f1++;
        }
        q[f1]=item;
    }
void frontD(){
    if(f2==-1)
    printf("underflow\n");
    else{
        item=q[f2];
        if(f1==f2){
            f1=-1;
            f2=-1;
        }
        else
        f2++;
}
printf("%d",item);
}
