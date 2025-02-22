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
    int binaryToDecimal(string binary) {
        int decimal = 0;
        int power = 0;
        for (int i = binary.length() - 1; i >= 0; i--) {
            if (binary[i] == '1') {
                decimal += (1 << power);
            }
            power++;
        }
        return decimal;
    }
    
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        string s = "";
        while (temp != nullptr) {
            int data = temp->val;
            char x = (data == 1) ? '1' : '0';
            s = s + x;
            temp = temp->next;
        }
        int n = binaryToDecimal(s);
        return n;
    }
};