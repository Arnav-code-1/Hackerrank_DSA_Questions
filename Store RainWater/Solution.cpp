#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxi=0;
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,arr[i]);
        arr2[i]=maxi;
    }
    int arr3[n];
    int maxi2=0;
    for(int i=n-1;i>0;i--)
    {
        maxi2=max(maxi2,arr[i]);
        arr3[i]=maxi2;    
    }
    int min1=0;
    int sum=0;
    for(int i=1;i<n;i++)
    {
            min1=min(arr2[i],arr3[i]);
            sum=sum+(min1-arr[i]);
    }
    cout<<sum;
    return 0;
}
