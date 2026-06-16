#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        ListNode *head,*p;
        if(head1==NULL&&head2==NULL)return NULL;
        if(head1==NULL)return head2;
        if(head2==NULL)return head1;
        if(head1->val<=head2->val){
            head=head1;
            head1=head1->next;
        }else{
            head=head2;
            head2=head2->next;
        }
        p=head;
        while(head1!=NULL&&head2!=NULL){
            if(head1->val<=head2->val){
                p->next=head1;
                p=head1;
                head1=head1->next;
            }
            else {
                p->next=head2;
                p=head2;
                head2=head2->next;
            }
        }
        if(head1!=NULL){
            p->next=head1;
        }
        else if(head2!=NULL){
            p->next=head2;
        }
        return head;
    }
};