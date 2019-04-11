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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = 0;
        ListNode dummy(0);
        ListNode *tail = &dummy;
        while(l1 || l2 || sum){
            sum += (l1?l1->val:0) + (l2?l2->val:0);
            l1 = l1?l1->next:nullptr;
            l2 = l2?l2->next:nullptr;
            tail->next = new ListNode(sum % 10);
            sum /= 10;
            tail = tail->next;
        }
        return dummy.next;
    }
};
