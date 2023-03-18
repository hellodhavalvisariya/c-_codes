#include<iostream>
#include<vector>

using namespace std;
int main(){
vector<int> v;
cout<<"size "<<v.capacity()<<endl;//to memory allocated for storying data
v.push_back(1);
 cout<<"size "<<v.capacity()<<endl;
 v.push_back(2);
 cout<<"size "<<v.capacity()<<endl;
 v.push_back(3);
 cout<<"size "<<v.capacity()<<endl;

 cout<<"total elements  "<<v.size()<<endl; //to check the number of elements
cout<<"element at particular position "<<v.at(2)<<endl;
cout<<"element at front "<<v.front()<<endl;
cout<<"element at back "<<v.back()<<endl;

cout<<"before pop"<<endl;
for( int i:v){
    cout<<i<<" ";
}
cout<<endl;

v.pop_back();
for(int i:v)
    {
    cout<<i<<" ";
    }

cout<<"before clear size "<<v.size()<<endl;
v.clear();
cout<<"after clear size "<<v.size()<<endl;


vector<int> a(5,1);
for(int i:a){
    cout<<"member of a "<<a[i]<<endl;
}
vector<int> b(a);
for(int i:b){
    cout<<"member of a "<<  b[i]<<endl;
}
}
