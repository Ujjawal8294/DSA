#include <stdio.h>
#include <string.h>

#define MAX_SIZE 10

int stack[MAX_SIZE];
int top;
char item;
void push(char item);
char pop();

int main() {
    char s[MAX_SIZE],ch;
    int i,top=-1;
gets(s);
for(i=0;i<strlen(s);i++){
    ch=s[i];
    push(ch);
}
for(i=0;i<strlen(s);i++){
    ch=pop();
    s[i]=ch;
}
puts(s);
    return 0;
}
void push(char item) {
    if (top == MAX_SIZE - 1) {
        printf("Overflow\n");
        return;
    }else{
    top++;
    stack[top] = item;
}}

char pop() {
    if (top == -1) {
        printf("Underflow\n");
    }else{
    item = stack[top];
    top--;
    return item;
}}
