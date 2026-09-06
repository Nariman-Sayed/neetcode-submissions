 class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        int carry = 0;

        ListNode* dummy = new ListNode(0);
        ListNode* cur = dummy;

        while (l1 != NULL || l2 != NULL) {

            int v1 = (l1 != NULL) ? l1->val : 0;
            int v2 = (l2 != NULL) ? l2->val : 0;

            int sum = v1 + v2 + carry;

            cur->next = new ListNode(sum % 10);
            cur = cur->next;

            carry = sum / 10;

            if (l1 != NULL)
                l1 = l1->next;

            if (l2 != NULL)
                l2 = l2->next;
        }

        if (carry != 0)
            cur->next = new ListNode(carry);

        return dummy->next;
    }
};