#include<iostream>
#include<map>
using namespace std;
int main()
{

    map<int,string> m;
    m[1]="Dhaval";
    m[2]="hello";

    m.insert({5,"hiii"});
    for(auto i:m)
        {
        cout<<i.first<<i.second<<endl;
        }
        cout<<"finding 5==> "<<m.count(5)<<endl;

        m.erase(5);
}
