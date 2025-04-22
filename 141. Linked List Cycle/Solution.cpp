/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL)
        {
            return false;
        }
        if(head->next==NULL)
        {
            return false;
        }
        if(head->next==head)
        {
            return true;
        }
        
        ListNode* slow = head;
        ListNode* fast = head ;
        while(slow && fast )
        {
            slow = slow->next;
            fast = fast->next;
            if(fast!=NULL )
            {
                fast = fast->next;
            }
            if(slow==fast)
            {
                return true;
            }
        }
        return false;
        
    }
};