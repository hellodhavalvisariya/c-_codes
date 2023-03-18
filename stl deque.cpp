#include <iostream>
#include<deque>
using namespace std;
int main(){
deque<int> a;
a.push_back(1);
a.push_front(2);
for(int i:a){
    cout<<i;

}
cout<<endl;

//a.pop_back();
//a.pop_front();
/*for(int i:a){
 cout<<i;

}*/

cout<<"print first element "<<a.at(1)<<endl;


}
