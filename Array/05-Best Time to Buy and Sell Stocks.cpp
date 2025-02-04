#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int l=0,r=1,maxpro=0;
    while(r<prices.size()){
        if(prices[l]<prices[r]){
            int profit = prices[r]-prices[l];
            maxpro = max(maxpro,profit);
        }
        else{
            l=r;
        }
        r++;
    }
    return maxpro;
}