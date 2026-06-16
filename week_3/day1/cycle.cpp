#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *s,*f;
        f=head,s=head;
        while(f!=NULL&&f->next!=NULL){
            s=s->next;
            f=f->next->next;
            if(f==s) return true;
        }
        return false;
    }
};