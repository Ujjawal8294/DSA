#include<iostream>
using namespace std;
int main() {
int arr[5]={1,9,5,2,4};
int i,j,c;
for(i=1;i<5;i++){
j=i-1;
c=arr[i];
while(arr[j]>c&&j>=0){
    arr[j+1]=arr[j];
    j--;
}
arr[j+1]=c;
}
for(i=0;i<5;i++){
    cout<<arr[i];
}
return 0;
}