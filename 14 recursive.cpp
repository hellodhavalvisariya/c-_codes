#include <iostream>
using namespace std;
int fact(int n)
{
	if(n>1){
		return n*fact(n-1);
	}
	else {
		return 1;
	}
	
}
int main(){
	int n,m;
	cout<<"Enter number which u want factorial"<<endl;
	cin>>n;
	m=fact(n);
	cout<<m;
	
	
}
