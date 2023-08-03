#include <stdio.h>

int main() {
    // Write C code here
    int n,m,i,j,p,q,k;
    printf("enter number of rows:\n");
    scanf("%d",&n);
     printf("enter number of column:\n");
    scanf("%d",&m);
    int arr[n][m];
     printf("enter the element\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        scanf("%d",&arr[i][j]);
    }
    }
    printf("1st matrix is \n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
    }
    printf("enter number of rows:\n");
    scanf("%d",&p);
     printf("enter number of column:\n");
    scanf("%d",&q);
    int ar[p][q];
    printf("enter the element\n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
        scanf("%d",&ar[i][j]);
    }
    }
    printf("2nd matrix is\n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
        printf("%d ",ar[i][j]);
    }
    printf("\n");
    }
    int res[n][q];
    if(m!=p) printf("multiplication not exist");
    else{
        for(i=0;i<n;i++){
            for(j=0;j<q;j++){
                res[i][j]=0;
                for(k=0;k<q;k++){
                    res[i][j]+=arr[i][k]*ar[k][j];
                }
            }
        }
        printf("multipltiplication of two matrix is\n");
        for(i=0;i<n;i++){
            for(j=0;j<q;j++){
                printf("%d ",res[i][j]);
            }
            printf("\n");
    }
    }
    return 0;
}