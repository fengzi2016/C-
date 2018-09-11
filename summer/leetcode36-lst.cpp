int lengthOfLIS(vector<int>& nums) {
    if(num.size()==0)return 0;
    int len = 1;
    vector<int> dp(nums.size(),1);
    for(int i=0;i<nums.size();i++) {
        for(int j=0;j<i;j++) {
            if(nums[i]>nums[j]&&dp[i]<dp[j]+1)
                dp[i] = dp[j] + 1;
            if(len<dp[i])
                len = dp[i];
        }
    }
    delete dp;
    return len;
}