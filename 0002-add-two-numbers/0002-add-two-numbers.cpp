class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
        ListNode*list=new ListNode();
        ListNode*temp=list;
        int carry=0,sum;
        while((l1!=NULL ||l2!=NULL) || (carry!=0)){
            sum=0;
            if(l1!=NULL) {
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            
            sum+=carry;
            carry=sum/10;
            temp->next=new ListNode(sum%10);
             temp=temp->next;
        }
        return list->next;
    }
};