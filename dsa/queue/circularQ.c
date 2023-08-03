#include<stdio.h>
#define max 10
int r=max-1;f=max-1;
int flag=0;
int q[max];
int item;
void rear(int item);
void front();
void display();
int main(){
int n;
do{
    printf("\nenter 1 for rear\tenter 2 for front\t enter 3 for display\tenter 4 for exit\n");
    scanf("%d",&n);
    switch(n){
        case 1:printf("enter element for rear");
               scanf("%d",&item);
               rear(item);
               break;
        case 2:front();
               break;
        case 3:display();
               break;
        case 4:printf("Exiting\n");
    }
}
while(n!=4);
}
void rear(int item){
    if(r==f&&flag==1){
        printf("Overflow\n");
    }
    else{
    r=(r+1)%max;
    q[r]=item;
    flag=1;
}
}
void front(){
    if(f==r&&flag==0)
    printf("underflow\n");
    else{
        f=(f+1)%max;
        item=q[f];
        flag=0;
    }
    printf("%d",item);
}
void display(){
    int i;
    for(i=r;i>0;i--){
        printf("%d",q[i]);
    }
}