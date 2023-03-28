#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        v.push_back(x);
    }
    int key;cin>>key;
    sort(v.begin(),v.end());
    int z=v.size()-key;
    cout<<v[z];
    
    
    return 0;
}
