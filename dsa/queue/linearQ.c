#include<stdio.h>
#define max 10
int r=-1;f=-1;
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
    if(r==max){
        printf("Overflow\n");
    }
    else if(f==-1&&r==-1){
        r++;
        f++;
    }
    else r++;
    q[r]=item;
}
void front(){
    if(f==-1)
    printf("underflow\n");
    else{
        item=q[f];
    if(f==r){
        f=-1;
        r=-1;
    }
    else{
    f++;
    }
    }
    printf("%d",item);
}
void display(){
    int i;
    for(i=r;i>0;i--){
        printf("%d",q[i]);
    }
}