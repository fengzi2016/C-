int coinChange(vector<int>& coins, int amount) {
    if(amount==0) return 0;
    vector<int> ans(amount+1,0);
    for(int i=0;i<coins.size();i++) {
        if(coins[i]>amount) continue;
        ans[coins[i]] = 1;
    }
    for(int i= 1;i<=amount;i++) {
        if(ans[i]!=0) continue;
        int mi = INT_MAX;
        for(int j=0;j<coins.size();j++) {
            if(i-coins[j]<=0||ans[i-coins[j]]==0) continue;
            mi = min(mi,ans[i-coins[j]]+1);
        }
        min == INT_MAX?0:min;
        ans[i] = mi;
    }
    return ans[amount]==0?-1:ans[amount];
   
}