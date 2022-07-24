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
    ListNode* middleNode(ListNode* head) {
        ListNode* tmp = head;
        int cnt = 0;
        while(tmp != NULL){
            cnt++;
            tmp = tmp->next;
        }
        for(int i = 0; i < cnt/2; i++){
            head->val = head->next->val;
            head->next = head->next->next;
        }
        return head; 
    }
};
