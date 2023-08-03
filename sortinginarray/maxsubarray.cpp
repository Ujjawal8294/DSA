#include<iostream>
#include<climits>
using namespace std;
//brute force approach;
int main(){
    int arr[5]={-1,4,7,6,3};
    int i,j,k;
    int maxi=INT_MIN;
    for(i=0;i<5;i++){
        for(j=i;j<5;j++){
            int sum=0;
            for(k=i;k<=j;k++){
                sum+=arr[k];
            }
            maxi=max(maxi,sum);
        }
    }
    cout<<"max is "<<maxi;
    return 0;
}