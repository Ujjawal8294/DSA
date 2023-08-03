#include<stdio.h>
#define max 10
int r=max,f=-1;
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
    if(r-1==f){
        printf("Overflow\n");
    }
    else{
    r=r-1;
    q[r]=item;
}
}
void rearD(){
    if(r==max){
        printf("underflow");
    }
    else {
        item=q[r];
        r++;
        printf("rear delete item is %d\n",item);
    }
}
void frontI(int item){
    if(f+1==r){
        printf("overflow\n");
    }
    else {
        f++;
        q[f]=item;
    }
}
void frontD(){
    if(f==-1)
    printf("underflow\n");
    else{
        item=q[f];
        f--;
        printf("%d",item);
    }
}
