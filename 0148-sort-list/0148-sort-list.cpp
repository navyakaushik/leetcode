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
    ListNode* findMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        
        // Merge lists
        while (list1 != NULL && list2 != NULL) {
            if (list1->val < list2->val) {
                temp->next = list1;
                temp = list1;
                list1 = list1->next;
            } else {
                temp->next = list2;
                temp = list2;
                list2 = list2->next;
            }
        }
        
        // Attach the remaining part of the list
        if (list1) temp->next = list1;
        else temp->next = list2;
        
        return dummy->next;
    }
    
    ListNode* sortList(ListNode* head) {
        // Base case: If the list is empty or has only one element
        if (head == NULL || head->next == NULL) return head;
        
        // Find the middle of the list
        ListNode* middle = findMiddle(head);
        ListNode* right = middle->next;
        middle->next = nullptr;
        ListNode* left = head;
        
        // Sort the left and right halves recursively
        left = sortList(left);
        right = sortList(right);
        
        // Merge the sorted halves
        return mergeTwoLists(left, right);
    }
};
