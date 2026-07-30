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
    ListNode* removeElements(ListNode* head, int val) {
        while(head && head->val == val){
            head = head->next;
        }
        ListNode *Curr = head;
        ListNode *Prev = NULL;
        while(Curr!= NULL){
          if(Curr->val == val){
            Prev->next = Curr->next;
            Curr = Curr->next;
          } else{
           Prev = Curr;
           Curr = Curr->next;
          }
        }
        return head;
    }
};