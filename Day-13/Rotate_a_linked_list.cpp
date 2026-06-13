class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* temp = head;
        int cnt = 0;
        while (temp != NULL) {
            cnt = cnt + 1;
            temp = temp->next;
        }
        k = k % cnt;
        if (k == 0) {
            return head;
        }
        ListNode* fast = head;
        ListNode* slow = head;
        while (k--) {
            fast = fast->next;
        }
        while (fast->next) {
            slow = slow->next;
            fast = fast->next;
        }
        ListNode* ans = slow->next;
        slow->next = nullptr;
        fast->next = head;
        return ans;
    }
};