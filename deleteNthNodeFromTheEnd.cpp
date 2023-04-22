#include<bits/stdc++.h>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    int length(ListNode *head){
        if(head == NULL) return 0;
        int len = 0;
        ListNode *curr = head;
        while(curr != NULL){
            len ++;
            curr = curr->next;
        }
        return len;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head) return head;
        ListNode *temp = new ListNode(-1);
        temp->next = head;
        ListNode *slow = temp, *fast = temp;
        for (int i = 0; i < n; i++)
            fast = fast->next;
        while (fast->next) 
        {
            fast = fast->next;
            slow = slow->next;
        }
        ListNode *nthnode = slow->next;
        slow->next = slow->next->next;
        // delete to_be_deleted;
        return temp->next;
        
    }
};