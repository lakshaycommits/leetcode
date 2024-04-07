class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return nullptr;
        ListNode* a = headA, *b = headB;
        while(a != b) {
            if(a)
                a = a->next;
            else {
                b = b->next;
                a = headA;
            }
        }
        return a;
    }
};