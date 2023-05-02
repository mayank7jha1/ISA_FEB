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
    ListNode* mid(ListNode* head) {
        //LEETCODE mid point i.ee first

        if (head == NULL or head->next == NULL) {
            return head;
        }

        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != NULL and fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

        }
        return slow;
    }

    void ReverseLL(ListNode* head) {
        ListNode* current = head;
        ListNode* prev = NULL;
        ListNode* n;


        while (current != NULL) {
            n = current->next;
            current->next = prev;
            prev = current;
            current = n;
        }
        head = prev;
    }

public:
    bool isPalindrome(ListNode* head) {

        ListNode* m = mid(head);
        ListNode* h = head;


        //Two parts me break kardo.

        ListNode* h1 = m->next;

        m->next = NULL;

        //head----->mid and mid----->tail

        ReverseLL(h1);

        while (h1 and h2) {
            if (h1->val != h2->val) {
                return false;
            }
            h1 = h1->next;
            h2 = h2->next;
        }

        return true;
    }
};










