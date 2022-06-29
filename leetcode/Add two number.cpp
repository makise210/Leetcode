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
    ListNode* tmp = new ListNode(-1), *cur = tmp;//new linklist for result
    int carry = 0;//carry number
    while(l1||l2){
        int val1 = l1 ? l1->val : 0;
        int val2 = l2 ? l2->val : 0;
        int sum = val1 + val2 + carry;
        carry = sum/10;
        cur->next = new ListNode(sum%10);//add to Linkelist tmp
        cur = cur->next;
        if(l1)l1 = l1->next;
        if(l2)l2 = l2->next;
        }
        
        //Make sure there's value in each node, if no take 0
        
    if(carry)cur->next = new ListNode(1);//new Node for top digit
        return tmp->next;   
    }
};