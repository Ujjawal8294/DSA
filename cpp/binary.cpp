#include<iostream>
using namespace std;
int main(){
    int flag, n,low,high,mid,i,se,loc;
    cout<<"enter no. of index"<<endl;
    cin>>n;
    int arr[n]={1,2,3,4,5};
    low=0;
    high=n-1;
    flag=-1;
    se=4;
    for(i=0;i<n;i++){
        mid=(low+high)/2;
    if(se=arr[mid])
    flag=mid;
    loc=i;
    if(arr[mid]>se)
    low=mid+1;
    if(arr[mid]<se)
    high=mid-1;
    }
    if(flag==-1)
    cout<<"not found";
    else
    cout<<"found at "<<loc<<endl;
}