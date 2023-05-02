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
    int numComponents(ListNode* head, vector<int>& nums) {
        int s[100005] = {0};

        for (int i = 0; i < nums.size(); i++) {
            s[nums[i]]++;
        }


        int Components = 0;

        while (head != NULL) {
            if (s[head->val] == 1 and (head->next == NULL or s[head->next->val] == 0)) {
                Components++;
            }
            head = head->next;
        }
        return Components;
    }
};


// 1->2->3->4->5->6->7;


// 1 2 7