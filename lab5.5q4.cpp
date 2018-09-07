#include<iostream>
using namespace std;
int main (){
int row;
cout<<"enter the no of star in a row";
cin>>row;
for (int i=0; i<row; i++){//for print stars
	for(int j=0; j<i+1; j++){//make copy of stars
cout <<"*";
}
cout<<endl;
}
for (int a=row-1; a>0;a--){
for (int b=0; b<a; b++){
cout<<"*";
}
cout<<endl;
}

return 0;
}
	
