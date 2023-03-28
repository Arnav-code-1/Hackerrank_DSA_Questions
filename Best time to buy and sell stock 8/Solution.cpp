#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;




int main() {
    
    int n;
    cin>>n;
    int prices[n];
    for(int i=0;i<n;i++){
        cin>>prices[i];
    }
    int min_price = 100000;
    int max_Profit = 0;
    for(int i=0;i<n;i++)
    {
        min_price = min(min_price,prices[i]);
        max_Profit = max(max_Profit,prices[i]-min_price);
    }
    cout<<max_Profit<<endl;
    return 0;
}
