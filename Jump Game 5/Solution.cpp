#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n==1)
    {
        cout<<"true";
    }
    else{
        int flag=1;
        int sum=0;
        for(int i=0;i<n-1;i++)
        {
            sum=sum+arr[i];
            if(arr[sum]==0 && sum!=n-1)
            {
                flag=0;
                break;
            }
            i=sum-1;
        }
        if(flag==1)
            cout<<"true";
        else
            cout<<"false";
    }
    
}
