#include<iostream>
using namespace std;
int main(){
    int a[5]={1,7,5,9,3};
    int i,j,t;
    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            if(a[i]>a[j]){
            t=a[i];
            a[i]=a[j];
            a[j]=t;
            }
        }
    }
    for(i=0;i<5;i++){
        cout<<a[i];
    }
    return 0;
}
