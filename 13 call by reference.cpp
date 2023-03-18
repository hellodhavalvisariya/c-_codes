#include <iostream>
using namespace std;
void swap( int *a,int *b)
{
	int swap; 
	swap = *a;
	*a=*b;
	*b=swap;
}
int main()
{
	int a=100;
	int b=200;
	
	cout<<"a="<<a<<endl<<"b"<<b<<endl;
	swap(a,b);
	cout<<"a="<<a<<endl<<"b"<<b<<endl;
}
