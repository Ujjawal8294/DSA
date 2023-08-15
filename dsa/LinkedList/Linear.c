#include<stdio.h>
struct node{
    int data;
    struct node* next;
};
typedef struct node node;
node*head;
node*last;
void insert();
void traverse();
void search();
void after();
void befre();
int main(){
    head=NULL;
    int n;
    while(1){
    printf("1 for insert\t2 for traverse\n3 for search\n 4 for after\5 for before\n6 for exit");
    scanf("%d",&n);
    switch(n){
        case 1:insert();
               break;
        case 2:traverse();
               break;
        case 3:search();
               break;
        case 4:after();
               break;
        case 5:before();
               break;
        case 6:exit(0);
               return;
    }
    }
    return 0;
}
void insert(){
    node*temp=malloc(sizeof(node));
    printf("Enter data in node\n");
    scanf("%d",&temp->data);
    temp->next=NULL;\
    if(head==NULL){
        head=temp;
        last=temp;
    }
    else{
        last->next=temp;
        last=temp;
    }
}
void traverse(){
    node*dh=malloc(sizeof(node));
    dh=head;
    while(dh!=NULL){
        printf("%d",dh->data);
        dh=dh->next;
    }
}
void search(){
    node*dh=malloc(sizeof(node));
    dh=head;
    int se;
    printf("enter the number you want to search:");
    scanf("%d",&se);
    int flag=0;
    while(dh!=NULL){
        if(dh->data==se){
            flag=1;
            break;
        }
        dh=dh->next;
    }
    if(flag==1) printf("found\n");
    else printf("not found\n");
}
void after(){
    node*dh=malloc(sizeof(node));
    dh=head;
    int n;
    int flag=0;
    printf("enter the data after you want to insert\n");
    scanf("%d",&n);
    node*temp=malloc(sizeof(node));
    while(dh!=NULL){
        if (n==dh->data){
            flag=1;
            break;
        }
        dh=dh->next;
    }
    if(flag==0) {
        printf("Not found\n");
        return;
    }
    scanf("%d",&temp->data);
    temp->next=dh->next;
    dh->next=temp;
    if(temp->next==NULL){
        last=temp;
    }
}
void before(){
    node*dh=malloc(sizeof(node));
    node*temp=malloc(sizeof(node));
    dh=head;
    printf("enter the data before you want to insert\n");
    int n,flag=0;
    scanf("%d",&n);
    if(n==head->data){
        scanf("%d",&temp->data);
        temp->next=head;
        head=temp;
        return;
    }
    while(dh!=NULL){
        if(dh->next->data==n){
            flag=1;
            break;
        }
    }
    dh=dh->next;
   if(flag==0) {
    printf("not found\n");
    return;
   }
   scanf("%d",&temp->data);
   temp->next=dh->next;
   dh->next=temp;
}