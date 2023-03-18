#include<iostream>
#include<queue>
using namespace std;
int main()
{

    queue<string> q;
    q.push("Dhaval");
    q.push("Visariya");
    q.push("CSPIT");

    cout<<"print first element "<<q.front()<<endl;

    q.pop();

    while(!q.empty())
        {
        cout<<q.front()<<endl;
        q.pop();
    }
}
