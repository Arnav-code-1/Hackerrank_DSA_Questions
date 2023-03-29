#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;cin>>n;
    int m;cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int k=0;
    for(int i=0;i<m;i++)
    {
        if(k%2==0)
        {
            for(int j=0;j<n;j++)
            {
            cout<<arr[j][i]<<" ";
            }
            k++;
        }
        else
        {
            for(int j=n-1;j>=0;j--)
            {
                cout<<arr[j][i]<<" ";
            }
            k++;
        }
    }
    return 0;
}
