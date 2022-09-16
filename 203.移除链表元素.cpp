/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* p=head;
        if(p==nullptr)//特判空表
            return head;
        while(p->next!=nullptr){
            if(p->next->val==val){//删除之后不要急着后移p,因为这样相当于跳过了一个元素
                ListNode*q=p->next;
                p->next=q->next;
                q->next=nullptr;
            }
            else{//p->next结点删不了才能移动p
                p=p->next;
            }
        }
        if(head->val==val){
            head=head->next;
        }
        return head;
    }
};
// @lc code=end

