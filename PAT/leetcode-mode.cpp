#include<iostream>
#include<algorithm>
#include<vector.h>
#include <string> 
using namespace std;
int main(){
	string s = "hello";
	
	/*int singleNumber(vector<int>& nums);
    //vector<int> intersect2(vector<int>& nums1, vector<int>& nums2) ;
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) ;
	int n[] = {9,1}; 
	int te[] = {7,8,3,9,0,0,9,1,5};
	vector<int> b(n,n+2) ;
	vector<int> a(te,te+9);
	int i;
	vector<int> result  = intersect(a,b);
	for(i=0;i<result.size();i++)
		cout<<result[i];*/
}
/*vector<int> intersect(vector<int>& nums1, vector<int>& nums2){
	int i,j;
	vector<int> result;
	if(nums1.size()==0||nums2.size()==0){
           return result;
       }
	for(i=0;i<nums1.size();i++){
		for(j=0;j<nums2.size();j++){
			if(nums1[i]==nums2[j]){
                // b.erase(b.begin())
				result.push_back(nums1[i]);
                
			}
		}
	}
	return result;
} 

 /*  vector<int> intersect2(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result ;  
        if(nums1.size()==0||nums2.size()==0){
           return result;
       }
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        if(nums1[0]>nums2[nums2.size()-1])
            return result;
       if(nums1[nums1.size()-1]<nums2[0])
            return result;
        int i,j=0,k=0;
        for(i=0;i<nums1.size(),j<nums2.size();){
          if(nums1[i]>nums2[j]){
              j++;
          }else if(nums1[i]<nums2[j]){
              i++;
          }else{
              result.push_back(nums1[i]);
              k++;
              i++;
              j++;
              
          }
    }
        return result;
}
  */     
       
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