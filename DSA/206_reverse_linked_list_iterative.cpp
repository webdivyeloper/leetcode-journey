class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* PREV = NULL;
        ListNode* CURR = head;
        ListNode* NEXT = head;

        while(CURR != NULL){
            NEXT = CURR->next;
            CURR->next = PREV;
            PREV = CURR;
            CURR = NEXT;
        }
        return PREV;
    }
};
