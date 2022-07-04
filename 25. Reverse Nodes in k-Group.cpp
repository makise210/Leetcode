class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
    if(!head||k==1)return head;
    ListNode* tmp = new ListNode(-1), *pre = tmp, *cur = head;//use tmp to make sure the head wont changes
        tmp->next = head;
    for(int i = 1; cur; ++i){
        if(i%k==0){
            pre = reverse_a_group(pre, cur->next);
            cur = pre->next;
        }else{
            cur = cur->next;
        }
    }
    return tmp->next;
    }
    ListNode* reverse_a_group(ListNode* pre, ListNode* next){//reverse a group of nodes
        ListNode* last = pre->next, *cur = last->next;
        while(cur != next){
            last->next = cur->next;
            cur->next = pre->next;
            pre->next = cur;
            cur = last->next;
        }
        return last;
    }
};
