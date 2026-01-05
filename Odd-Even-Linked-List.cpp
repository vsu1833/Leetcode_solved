1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */class Solution {
11public:
12    ListNode* oddEvenList(ListNode* head) {
13
14        if (head == nullptr)
15            return nullptr;
16
17        vector<int> odd, even;
18        int index = 1;
19        ListNode* curr = head;
20
21        while (curr != nullptr) {
22            if (index % 2 == 0)
23                even.push_back(curr->val);
24            else
25                odd.push_back(curr->val);
26
27            curr = curr->next;
28            index++;
29        }
30
31        ListNode* newHead = nullptr;
32        ListNode* tail = nullptr;
33
34        for (int x : odd) {
35            if (!newHead)
36                newHead = tail = new ListNode(x);
37            else
38                tail = tail->next = new ListNode(x);
39        }
40
41        for (int x : even) {
42            tail = tail->next = new ListNode(x);
43        }
44
45        return newHead;
46    }
47};
48