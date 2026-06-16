#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *s,*f;
        s=head,f=head;
        while(f!=NULL&&f->next!=NULL){
            s=s->next;
            f=f->next->next;
        }
        return s;
    }
};