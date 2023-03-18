#include <iostream>
using namespace std;
int main()
	{
		int age;
		
		cout<<"Enter Your Age"<<endl; 
		cin>>age;
		
		if (age<18){
			cout<<"you are not elidible"<<endl;
		}
		else if (age==18)
		{
			cout<<"you get a kid pass"<<endl;
			
		}
		else
		{
			cout<<"you are elidible"<<endl;
		}
		return 0;
			
	}
