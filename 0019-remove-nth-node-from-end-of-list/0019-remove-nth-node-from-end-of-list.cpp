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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int cnt=0;
        ListNode*temp=head;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        if(n==cnt) return head->next;
        if(head==NULL) return NULL;
        temp=head;
        ListNode*node=temp;
        while(cnt-n>0){
            node=temp;
            temp=temp->next;
            (cnt)--;
        }
        node->next=temp->next;
        return head;
    }
};