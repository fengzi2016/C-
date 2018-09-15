class Solution {
public:
    int mySqrt(int x) {
        int high = x/2;
        int low = 1;
        while(high>low) {
            int mid = low + (high-low) / 2;
            if(mid>46340) {
                high = 46340;
            }
            else {
                int cha = x - mid*mid;
                if(cha > 0) {
                    low  = mid + 1;
                }else if(cha < 0) {
                    high = mid;
                }else {
                    return mid;
                }
            }
                
        }
       
        if(low*low>x){return low-1;}
        return low;
    }
};