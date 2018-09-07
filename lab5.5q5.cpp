#include<iostream>
using namespace std;
int main(){
int l,i;
cout<<"enter the no of line";
cin>>l;
for(i=0;i<l; i++){
	if (i==0 && i==(l-1)){
	for(int j=0;j<l;j++){
		cout<<"*";
		}
	}
	else{
		cout<<"*";
		for(int k=0;k<(l-2);k++){
		cout<<" ";
}
cout<<endl;
}
cout<<"*";
}
return 0;
}














