#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
    int n;
     cin>>n;

vector<int> v(n);


for (int i=0;i<n;i++){

    cin>>v[i];

}
    for (int i=0;i<n;i++){
sort(v.begin(),v.end());

                    cout<<v[i]<<" ";}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

