
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> values;
        ListNode* tmp = head;

        while (tmp != nullptr) {
            values.push_back(tmp->val);
            tmp = tmp->next;
        }

        int i = 0, j = values.size() - 1;
        while (i < j) {
            if (values[i] != values[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};
