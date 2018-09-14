class Solution {
public:
    double myPow(double x, int n) {
        int flag = 1;
        if(n<0){
            n = -n;
            flag = -1;
        } 
        double result = 1;
        
        while(n--) {
           result *= x;
        }
        if(flag == -1) {
            double base = 1;
            result = base/result;
        }
        return result;
    }
};