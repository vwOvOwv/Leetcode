/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        int len=1;
        string ans;
        ans.push_back(s[0]);
        bool dp[1010][1010]={0};
        int n=s.length();
        for(int i=0;i<n;i++)
            dp[i][i]=1;
        for(int j=1;j<n;j++){//注意dp顺序
            for(int i=0;i<j;i++){
                if(j==i+1){
                    dp[i][j]=(s[i]==s[j]);
                }
                else{
                    dp[i][j]=(dp[i+1][j-1]&&s[i]==s[j]);
                }
                if(dp[i][j]){
                    if(len<j-i+1){
                        ans=s.substr(i,j-i+1);
                        len=j-i+1;
                    }
                }
            }
        }
        return ans;
    }
};
// @lc code=end

