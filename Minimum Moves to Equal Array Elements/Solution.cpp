#include <cmath>
#include <cstdio>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <limits.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int min=INT_MAX,sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j!=i){
                sum+=abs(a[i]-a[j]);
            }
        }
        if(sum<min){
            min=sum;
        }
        sum=0;
    }
    cout<<min<<endl;
}
