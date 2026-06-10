// TIME COMPLEXITY :O(n)
// SPACE COMPLEXITY : O(1)



class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      ListNode* fast=head;
      for(int i=0;i<n;i++)  
      {
        fast=fast->next;
      }
      ListNode* slow=head;
      if(fast==NULL)
      {
        ListNode* Newhead=head ->next;
      delete head;
      return Newhead;
      }
      while(fast->next!=NULL)
      {
        slow=slow ->next;
        fast=fast->next;
      }
      
    ListNode* delnode=slow ->next;
    slow->next=slow->next->next;
    delete delnode;
    return head;
    }
};