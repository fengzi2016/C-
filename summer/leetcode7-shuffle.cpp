//洗牌算法 :算法的思想是每次从未选中的数字中随机挑选一个加入排列，时间复杂度为O(n)
class Solution {
public:
    Solution(vector<int> nums): v(nums) {}
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return v;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        vector<int> res = v;
        //2种解法： 
        // for (int i = 0; i < res.size(); ++i) {
        //     int t = i + rand() % (res.size() - i);
        //     swap(res[i], res[t]);
        // }
        // return res;
        for(int i=res.size()-1;i>=0;i--) {
            int t = rand()%(i+1);
            swap(res[i],res[t]);
        }
        return res;
    }
    
private:
    vector<int> v;
};