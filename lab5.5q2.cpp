#include<iostream>
using namespace std;
int main (){
int row;
cout<<"enter the no of star in a row";
cin>>row;
for(int i=1; i<row+1; i++)
	{for(int j=1; j<=i;j++){
 cout<<"*";
}
cout<<endl;
}
return 0;
}
	
