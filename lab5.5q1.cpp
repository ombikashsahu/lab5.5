#include<iostream>
using namespace std;
int main (){
int i, line, j;
cout <<"enter the no of line";
cin>> line;
for (i=1; i<line+1; i++)//printing the stars in a line
{
for(j=1; j<line+1; j++)//repeat the printing to no of line times
{
cout<<"*";
}
cout<<endl;	
}
	

return 0;
}
