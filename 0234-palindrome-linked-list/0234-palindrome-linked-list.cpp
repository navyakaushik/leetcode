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
    bool isPalindrome(ListNode* head){
        if(head == NULL || head->next == NULL)
            return head;
            
            ListNode* temp = head;
            stack<int> st;
            
            while(temp!=NULL){
                st.push(temp->val);
                temp=temp->next;
            }
            
            ListNode* temp1=head;
            
            while(temp1!=NULL){
                if(st.top()!=temp1->val) return false;
                st.pop();
                temp1=temp1->next;
            }
            return true;
        }
};