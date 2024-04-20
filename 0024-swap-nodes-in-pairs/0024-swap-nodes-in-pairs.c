
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode *a, *b, *c;
    
    a = head;
    if (a && a->next) {
        b = a->next;
        c = b->next;
        b->next = a;
        a->next = swapPairs(c);
        return b;
    }
    
    return a;
}
