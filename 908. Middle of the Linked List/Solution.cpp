class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        int mid = count / 2; 

        ListNode* node = head;
        while (mid > 0) {
            node = node->next;
            mid--;
        }

        return node;
    }
};
