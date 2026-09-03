 class Solution {
public:
    void reorderList(ListNode* head) {

        vector<int> v;

        ListNode* temp = head;

        while (temp != nullptr) {
            v.push_back(temp->val);
            temp = temp->next;
        }

        for (int i = 0; i < v.size() / 2; i++) {

            head->val = v[i];
            head = head->next;

            head->val = v[v.size() - i - 1];
            head = head->next;
        }

        if (v.size() % 2 != 0) {
            head->val = v[v.size() / 2];
        }
    }
};