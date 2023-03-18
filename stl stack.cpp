#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<string> s;
s.push("Dhaval");
s.push("Visariya");
/*while(!s.empty())
    {
      cout<<s.top()<<" ";
      s.pop();
    }*/

    cout<<"top element "<<s.top()<<endl;
     cout<<"size of stack "<<s.size()<<endl;
      cout<<"empty or not "<<s.empty()<<endl;
}
