/*
 * @lc app=leetcode.cn id=22 lang=cpp
 *
 * [22] 括号生成
 */

// @lc code=start
class Solution {
public:
    vector<string>rec;
    string ans;
    void generate(int n){
        if(n==0){
            return;
        }
        ans+="()";
        generate(n-1);
        rec.push_back(ans);

        ans.clear();
        ans+="(";
        generate(n-1);
        ans.push_back(')');
        rec.push_back(ans);

        ans.clear();
        generate(n-1);
        ans+="()";
        rec.push_back(ans);

    }
    vector<string> generateParenthesis(int n) {
        generate(n);
        return rec;
    }
};
// @lc code=end

