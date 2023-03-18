#include<iostream>
#include<set>
using namespace std;
int main()
{

        set<int> s;
        s.insert(5);
         s.insert(8);
          s.insert(7);
           s.insert(3);
           for (int i:s){
            cout<<i<<endl;
           }


           s.erase(s.begin());

           for (int i:s){
            cout<<i<<endl;
           }

           cout<<"7 is present "<<s.count(7)<<endl;

}
