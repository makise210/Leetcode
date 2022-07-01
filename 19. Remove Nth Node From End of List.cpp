class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head->next)return NULL;
        ListNode *pre = head, *tar = head;//use two pointer to search
        for(int i=0;i<n;++i)tar = tar->next;
        if(!tar)return head->next;
        while(tar->next){
            tar=tar->next;
            pre=pre->next;
        }
        pre->next = pre->next->next;
        return head;
    }
};
