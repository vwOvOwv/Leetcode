/*
 * @lc app=leetcode.cn id=496 lang=cpp
 *
 * [496] 下一个更大元素 I
 */

// @lc code=start
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {//单调栈+哈希表
        unordered_map<int,int>hashmap;
        stack<int>st;
        for(int i=nums2.size()-1;i>=0;i--){//倒序遍历，利用单调栈找到每一个元素的下一个更大元素
            while(!st.empty()&&nums2[i]>=st.top()){//栈顶的元素总是当前最可能是下一个最大元素的元素
                st.pop();//当前栈顶元素已经不可能是下一个最大元素了，因为左侧的元素比它更大
            }
            hashmap[nums2[i]]=st.empty()?-1:st.top();//找到后用哈希表建立映射
            st.push(nums2[i]);
        }
        vector<int>ans(nums1.size());
        for(int i=0;i<nums1.size();i++){
            ans[i]=(hashmap[nums1[i]]);
        }
        return ans;
    }
};
// @lc code=end

