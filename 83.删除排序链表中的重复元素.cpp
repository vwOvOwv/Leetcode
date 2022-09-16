/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr)
            return head;
        ListNode*p,*q;
        p=q=head;
        while(p!=nullptr){
            while(q!=nullptr&&p->val==q->val){
                q=q->next;
            }
            p->next=q;
            p=p->next;
        }
        return head;
    }
};
// @lc code=end

