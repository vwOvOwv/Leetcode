/*
 * @lc app=leetcode.cn id=231 lang=cpp
 *
 * [231] 2 的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;
        int cnt=0;
        while(n!=0){
            if(n&1)
                cnt++;
            if(cnt>1)
                return false;
            n>>=1;
        }
        return true;
    }
};
// @lc code=end

