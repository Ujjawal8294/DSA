#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

int stack[MAX_SIZE];
int top,item;
void push(int item);
void pop();
void display();

int main() {
    int s[MAX_SIZE];
    int i,top=-1;
do{
    printf("\npress 1 for push\tpress2 for pop press 3 for display\n");
    scanf("%d",&i);
    switch(i){
        case 1:printf("enter a number for push");
        scanf("%d",&item);
        push(item);
        break;
        case 2:pop();
        break;
        case 3:display();
        break;
    }
}
while(i!=3);
    return 0;
}
void push(int item) {
    if (top == MAX_SIZE - 1) {
        printf("Overflow\n");
        return;
    }else{
    top++;
    stack[top] = item;
}}

void pop() {
    int item;
    if (top == -1) {
        printf("Underflow\n");
    }else{
    item = stack[top];
    top--;
    printf("%d",item);
}}
void display(){
    int i;
    for(i=top;i>0;i--){
        printf("%d",stack[i]);
    }
}

