/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
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
    ListNode* reverseList(ListNode* head) {
        // if(head==nullptr||head->next==nullptr)
        //     return head;
        // ListNode*p=nullptr;
        // ListNode*c=head,*n=c->next;
        // ListNode*q=head;
        // int cnt=1;
        // while(q->next!=nullptr){
        //     q=q->next;
        //     cnt++;
        // }
        // if(cnt%2){
        //     while(c->next!=nullptr){
        //         c->next=p;
        //         ListNode*tmp=c;
        //         c=n->next;
        //         n->next=tmp;
        //         p=n;
        //         n=c->next;
        //     }
        //     c->next=p;
        //     return c;
        // }
        // else{
        //     while(c->next->next!=nullptr){
        //         c->next=p;
        //         ListNode*tmp=c;
        //         c=n->next;
        //         n->next=tmp;
        //         p=n;
        //         n=c->next;
        //     }
        //     c->next=p;
        //     n->next=c;
        //     return n;
        // }
        ListNode*p=nullptr,*q=head;
        while(q!=nullptr){
            ListNode*tmp=q->next;//指针的维护！！！
            q->next=p;
            p=q;q=tmp;
        }
        return p;
    }
};
// @lc code=end

