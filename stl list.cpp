#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> a;
    a.push_back(1);
    a.push_front(2);
    for(int i:a){
        cout<<i<<endl;
    }
a.erase(a.begin());
 for(int i:a){
        cout<<i<<endl;
    }

    cout<<"size of list "<<a.size()<<endl;
list<int> b(a);//copying whole list


}
