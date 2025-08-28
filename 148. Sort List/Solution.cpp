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
    ListNode* sortList(ListNode* head) {
        ListNode *node = head;
priority_queue<int, vector<int>, greater<int>> pq;
        while(node!=nullptr)
        {
            pq.push(node->val);
            node=node->next;
        }
        node = head;
        while(node!=nullptr)
        {
            node->val= pq.top();
            pq.pop();
            node=node->next;
        }
    return head;
    }
};