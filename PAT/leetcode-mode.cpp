#include<iostream>
#include<algorithm>
#include<vector.h>

int main(){
	int singleNumber(vector<int>& nums);
	 vector<int> intersect(vector<int>& nums1, vector<int>& nums2) ;
	int n[] = {1,1,2,2,3,3,5} ;
	vector<int> a(n,n+7);
	cout<<singleNumber(a);
}


   vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result[0];
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        if(nums1[0]>nums2[nums2.size()-1])
            return result;
        if(nums1[nums.size()-1]<nums2[0])
            return result;
        int i,j=0,k=0;
        int minlen ;
        minlen = nums1.size()>nums2.size() ? nums2.size():nums1.size();
        for(i=0;i<minlen;){
          if(nums1[i]>nums2[j]){
              i++;
          }else if(nums1[i]<nums2[j]){
              j++;
          }else{
              result[k++]=nums1[i];
              i++;
              j++;
          }
    }
        return result;
}
       
       
 int singleNumber(vector<int>& nums) {
        int i;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();){
            if(nums[i]==nums[i+1]){
                i = i+2;
                cout<<"i="<<i<<endl;
            }else{
                return nums[i];
            }
                
        }
        
 }