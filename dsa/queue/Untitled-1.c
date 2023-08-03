#include <stdio.h>
#include <string.h>

int main(){
    int a[10]={0};
    int n;
    printf("enter number");
    scanf("%d",&n);
    char s[n];
    int i;
    scanf("%s",&s);
    for(i=0;i<strlen(s);i++){
        if(s[i]>='0'&&s[i]<='9'){
            int k=s[i]-'0';
            a[k]++;
        }
    }
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
