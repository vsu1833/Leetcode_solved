class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode *temp = head;

        while (temp != nullptr) {
            size++;
            temp = temp->next;
        }

        if (size == n) {
            ListNode* rem = head;
            head = head->next;
            delete rem;
            return head;
        }

        int trav = size - n - 1;  
        temp = head;
        while (trav > 0) {
            trav--;
            temp = temp->next;
        }

        ListNode *rem = temp->next;
        temp->next = rem->next;
        delete rem;

        return head;
    }
};
