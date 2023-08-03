#include<stdio.h>
#define max 10
struct priorityQ
{
int a;
int b;
};
struct priorityQ Q[max];
int f=-1,r=-1;
int u,v;
void sort();
void rear(int u,int v);
void front();
void display();
int main(){
    int n;
    do{
        printf("\n1 for push\t2 for pop\t3 for display\t4 for exit\n");
        scanf("%d",&n);
        switch(n){
            case 1: printf("enter number for push\n");
                    scanf("%d",&u);
                    printf("enter index for push\n");
                    scanf("%d",&v);
                    rear(u,v);
                    break;
            case 2:front();
                   break;
            case 3:display();
                   break;
            case 4:printf("Exiting\n");
                   break;
        }
    }
    while(n!=4);
    return 0;
}
void rear(int u,int v){
    if(r==max-1) printf("overflow");
    else if(r==-1&&f==-1){
        r++;
        f++;
    }
    else 
    r++;
    Q[r].a=u;
    Q[r].b=v;
    sort();
}
void front(){
    if(f==-1) printf("underflow\n");
    else {
        u=Q[r].a;
        if(f==r){
        r==-1;
        f==-1;
    }
    else 
    r++;
    }
    printf("%d",u);
}
void display(){
int i;
for(i=f;i<r;i++){
    printf("%d ",Q[i].a);
}
}
void sort(){
int i,j;
for(i=0;i<=r;i++){
    for(j=i+1;j<=r;j++){
        if(Q[i].b>Q[j].b){
            int temp=Q[i].a;
            Q[i].a=Q[j].a;
            Q[j].a=temp;
        }
    }
}
}


