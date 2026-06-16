#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev,*p,*q;
        p=head,q=head,prev=NULL;
        while(q!=NULL){
            q=p->next;
            p->next=prev;
            prev=p;
            p=q;
        }
        return prev;
    }
};