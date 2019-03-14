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
        ListNode *l=new ListNode(0);
        ListNode *l_cur=l;
        int carry=0;
        int x,y,s;
        while(l1||l2){
            x=(l1)?l1->val:0;
            y=(l2)?l2->val:0;
            s=x+y+carry;
            carry=s/10;
            l_cur->next=new ListNode(s%10);
            l_cur=l_cur->next;
            if(l1)l1=l1->next;
            if(l2)l2=l2->next;
        }
        if(carry==1){
            l_cur->next=new ListNode(1);
        }
        return l->next;
    }
};
