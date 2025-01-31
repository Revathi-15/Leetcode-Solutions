class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head,*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*dummy=NULL,*temp=slow->next;
        while(temp!=NULL){
            ListNode *next=temp->next;
            temp->next=dummy;
            dummy=temp;
            temp=next;
        }
        ListNode*newHead=dummy;
        fast=head;
        while(newHead!=NULL){
             if(fast->val!=newHead->val) return false;
             newHead=newHead->next;
             fast=fast->next;
        }
        return true;
    }
};