#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *s,*f;
        s=head,f=head;
        for(int i=0;i<n;i++)f=f->next;
        if(f==NULL){
            head=head->next;
            return head;
        }
        while(f->next!=NULL){
            s=s->next;
            f=f->next;
        }
        s->next=s->next->next;
        return head;
    }
};