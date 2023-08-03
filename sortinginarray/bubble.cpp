#include<iostream>
using namespace std;
int main(){
    int a[5]={1,7,5,9,3};
    int i,j,t;
    for(i=0;i<5;i++){
        for(j=0;j<4-i;j++){
            if(a[j]>a[j+1]){
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
            }
        }
    }
    for(i=0;i<5;i++){
        cout<<a[i];
    }
    return 0;
}
