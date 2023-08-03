#include<iostream>
using namespace std;
int main(){
	int a,b,j,k,l,u,v,i;
	l=1;
	for(i=1;i<=4;i++){
		for(k=1;k<=i;k++){
			cout<<"*";
		}
		for(u=1;u<=8-2*i;u++){
			cout<<" ";
		}
		for(v=1;v<=i;v++){
			cout<<"*";
		}
	cout<<endl;	
}
for(a=4;a>0;a--){
	for(b=a;b>0;b--){
		cout<<"*";
	}
	for(i=1;i<=8-2*a;i++){
		cout<<" ";
	}
	for(l=a;l>0;l--){
		cout<<"*";
	}
	cout<<endl;
}
	return 0;
}