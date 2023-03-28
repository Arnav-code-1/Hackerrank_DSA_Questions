#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int s=0;
    int e=n-1;
    int sum=0;
    int max=INT_MIN;
        while(s<=e)
        {
            for(int i=s;i<=e;i++)
            {
                sum=sum+arr[i];
            }
            if(max<sum)
                    max=sum;
            sum=0;
        if(arr[s]<arr[e])
            s++;
        else
            e--;
    }
    cout<<max;
    return 0;
}
