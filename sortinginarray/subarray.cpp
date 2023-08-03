#include<iostream>
using namespace std;
int main(){
    int arr[5]={-1,4,7,6,3};
    int i,j,k;
    for(i=0;i<5;i++){
        for(j=i;j<5;j++){
            for(k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}