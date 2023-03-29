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
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int cnt=0;
    int total=n*m;
    int firstrow=0;
    int firstcol=0;
    int lastrow=n-1;
    int lastcol=m-1;
    int k=0;
    while(cnt<total)
    {
        for(int j=firstcol;cnt<total && j<=lastcol;j++)
        {
            cout<<arr[firstrow][j]<<" ";
            cnt++;
        }
        firstrow++;
        
        for(int j=firstrow;cnt<total && j<=lastrow;j++)
        {
            cout<<arr[j][lastcol]<<" ";
            cnt++;
        }
        lastcol--;
        
        for(int j=lastcol;cnt<total && j>=firstcol;j--)
        {
            cout<<arr[lastrow][j]<<" ";
            cnt++;
        }
        lastrow--;
        
        for(int j=lastrow;cnt<total && j>=firstrow;j--)
        {
            cout<<arr[j][firstcol]<<" ";
            cnt++;
        }
        firstcol++;
    }
    return 0;
}
