#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *f,*s;
        s=head,f=head;
        while(f!=NULL&&f->next!=NULL){
            s=s->next;
            f=f->next->next;
        }
        ListNode *curr,*prev,*next;
        curr=s,prev=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        ListNode *p1=head,*p2=prev;
        while(p1!=NULL&&p2!=NULL){
            if (p1->val != p2->val) {
                return false;
            }
            p1 = p1->next;
            p2 = p2->next;
        }
        return true;
    }
};