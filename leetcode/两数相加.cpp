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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* d = new ListNode(0);
        ListNode* cur = d;
        int s = 0;
        int sum = 0;
        int x = 0;
        int y = 0;
        while(l1 != nullptr || l2 != nullptr ||s != 0){
            x = (l1 != nullptr) ? l1->val : 0;
            y = (l2 != nullptr) ? l2->val : 0;
            sum = x + y + s;
            s = sum / 10;
            cur->next = new ListNode(sum % 10);
            cur = cur->next;

            if(l1 != nullptr){
                l1 = l1->next;
            }
            if(l2 != nullptr){
                l2 = l2->next;
            }
        }
        return d->next;
    }
};
