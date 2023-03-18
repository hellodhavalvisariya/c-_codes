#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{

    vector<int>v;
    v.push_back(1);
    v.push_back(8);
    v.push_back(5);
    v.push_back(10);


    cout<<"finding 5"<<binary_search(v.begin(),v.end(),5)<<endl;



    int a=10;
    int b=20;

     cout<<"max==>"<<max(a,b);
     cout<<"min==>"<<min(a,b);

     swap(a,b);
     cout<<endl<<"a==>"<<a<<endl;

     string  abcd="abcd";
     reverse(abcd.begin(),abcd.end());
     cout<<abcd<<endl;

     int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
int n = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr + n);
       for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
}
