1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* sortList(ListNode* head) {
14        ListNode *node = head;
15priority_queue<int, vector<int>, greater<int>> pq;
16        while(node!=nullptr)
17        {
18            pq.push(node->val);
19            node=node->next;
20        }
21        node = head;
22        while(node!=nullptr)
23        {
24            node->val= pq.top();
25            pq.pop();
26            node=node->next;
27        }
28    return head;
29    }
30};