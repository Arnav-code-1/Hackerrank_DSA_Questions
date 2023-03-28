#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int z;
        cin>>z;
        v.push_back(z);
    }
    int k;
    cin>>k;
    int a =k%v.size();
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+a);
    reverse(v.begin()+a,v.end());
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}
