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



    ListNode* sortList(ListNode* head) {
        ListNode *p = head;
        vector<int>v;
        while(p!=NULL){
            v.push_back(p->val);
            p = p->next;
        }
        sort(v.begin(),v.end());
     int n=v.size();
        ListNode* temp1=head;
        for(int i=0;i<n;i++){
        temp1->val=v[i];
        temp1=temp1->next;
        }
        temp1=head;
        return temp1;
    }
    

};
